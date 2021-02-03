#include "calculator.h"
#include "comm_funcs.h"

Calculator::Calculator(int n) {
    arr[0] = arr[1] = nullptr;

    if (n <= 0) {
        err_msg = "Value can not be " + QString::number(n);
        err = true;
        this->n = 1;
    } else {
        err = false;
        err_msg = "";
        this->n = n;
    }

    init_arr();
}

Calculator::~Calculator() {
    if (arr[0]) delete [] arr[0];
    if (arr[1]) delete [] arr[1];
}

QString Calculator::get_err_msg() const {
    return err_msg;
}

bool Calculator::get_err() const {
    return err;
}

bool Calculator::is_prim_root(int num) const {
    if (num >= n) return -1;
    return arr[1][num];
}

bool Calculator::change_zn(int n) {

    if(arr[0]) delete [] arr[0];
    if(arr[1]) delete [] arr[1];
    arr[0] = arr[1] = nullptr;

    if (n <= 0) {
        err_msg = "Value can not be " + QString::number(n);
        err = true;
        this->n = 1;
        init_arr();
        return 0;
    }

    this->n = n;
    return init_arr();
}


bool Calculator::init_arr() {

    err = false;
    try {
        init_arr_reciprocal();
        init_arr_prim_roots();
    }  catch (char const* e) {
        err_msg = *e;
        err = true;
        if(arr[0]) delete [] arr[0];
        if(arr[1]) delete [] arr[1];
        return 0;
    }

    return 1;
}



bool Calculator::init_arr_reciprocal () {


    try {
        arr[0] = new int[n];
        for (int i=0; i<n; i++) arr[0][i] = -1;

        for (int i=1; i<n; i++) {

            if (arr[0][i] != -1) continue;

            for (int j=0; j<n; j++) {
                if ((i*j)%n == 1) {
                    arr[0][i] = j;
                    arr[0][j] = i;
                }
            }
        }
    } catch (...) {
        throw "Memory could not be allocated";
    }


    return 1;

}


bool Calculator::init_arr_prim_roots() {

    int *tmp_arr = nullptr;
    try {
        arr[1] = new int[n]{0};


        int cnt=cnt_s_nums(n);
        tmp_arr = new int[cnt];
        for (int i=0; i<cnt; i++) tmp_arr[i] = -1;

        int tmp;
        bool okay=true;

        for (int i=1; i<n; i++) {

            tmp = 1;
            okay=true;

            for (int j=0; j<cnt; j++) {
                tmp=(i*tmp)%n;
                tmp_arr[j] = tmp;
            }

            for (int j=0; j<cnt; j++) {
                if (gcd(tmp_arr[j], n)!=1) {
                    okay=false;
                    break;
                }
            }

            if (distinct_vals(tmp_arr, cnt) && okay==true) {
                arr[1][i] = 1;
            }

        }
        if (tmp_arr) delete [] tmp_arr;

    } catch (...) {
        if (tmp_arr) delete [] tmp_arr;
        throw "Memory could not be allocated";
    }


    return 1;
}


int Calculator::power(int num, int exp) const {

    err = false;
    err_msg = "";
    bool negative = (exp<0)?true:false;
    if (negative) exp*=-1;

    int new_num;

    if (num==1 || exp==0) {
        new_num=1;
    } else if (num==0) {
        new_num = 0;
    } else if (exp == 1) {
        new_num=num;
    } else {

        int k=2, tmp=(num*num)%n;

        while(tmp!=1) {
            if (k==exp) break;
            tmp=(tmp*num)%n;
            k++;
        }

        tmp = 1;
        if (k>=exp) {
            for (int i=0; i<exp; i++) {
                tmp=(tmp*num)%n;
            }
        } else {
            for (int i=0; i<(exp%k); i++) {
                tmp=(tmp*num)%n;
            }
        }

        new_num=tmp;
    }

    if (negative) {
        if (arr[0][new_num]==-1) {
            err_msg = "Can not be calculated!";
            err = true;
            return -1;
        } else {
            new_num = arr[0][new_num];
        }
    }
    return new_num;
}


int Calculator::dlog (int base, int num) const {

    if (base <= 0)

    err = false;
    err_msg = "";

    if (base <= 1 || base >= n || num <= 0 || num >= n) {

        err_msg="incorrect numbers!";
        err = true;
        return -1;

    } else if (arr[1][base]==1 && gcd(num, n) == 1) {

        int res=0;

        if (num!=1) {
            int tmp=1;
            do {
                tmp=(tmp*base)%n;
                res++;
            } while (tmp!=num);
        }

        return res;

    } else {
        err_msg="dlog" + QString::number(base) + "(" + QString::number(num) + ") does not exist";
        err = true;
        return -1;
    }
}


int Calculator::add(int a, int b) const {
    return (a+b)%n;
}

int Calculator::sub(int a, int b) const {
    return (a-b < 0) ? a-b + n : a - b;
}

int Calculator::mltp(int a, int b) const {
    return (a*b)%n;
}

int Calculator::div(int a, int b) const {

    err = false;
    err_msg = "";

    if (b <= 0 || b >= n || arr[0][b] == -1 ) {
        err = true;
        err_msg = "Can not divide by " + QString::number(b);
        return -1;
    }

    return (a * arr[0][b])%n;
}





