#include "tasks.h"

int task1(int *&arr, int &n) {

    std::cout << "Enter n: ";
    enterNumber(n, 1, INT32_MAX);

    if (arr!=nullptr) {
        delete [] arr;
        arr = nullptr;
    }

    arr = new int[n];

    if (arr != nullptr) {
        for (int i=0; i<n; i++) {
            arr[i] = i;
        }
    } else {
        n=0;
        std::cout << "Could not allocate memory" << std::endl;
    }

    return 0;
}


int task2(int n, int &a, int &b) {

    std::cout << a << " + " << b << " = " << (a+b)%n << std::endl;

    return 0;
}

int task3(int n, int &a, int &b) {

    int res = a-b;
    if (res<0) res+=n;
    std::cout << a << " - " << b << " = " << res << std::endl;

    return 0;
}

int task4(int n, int &a, int &b) {

    std::cout << a << " * " << b << " = " << (a*b)%n << std::endl;

    return 0;
}


int task5_1(int *& arr, int n) {

    if (arr != nullptr) {
        delete [] arr;
        arr = nullptr;
    }

    arr = new int[n];

    if (arr != nullptr ) {
        for (int i=0; i<n; i++) arr[i] = -1;

        for (int i=1; i<n; i++) {

            if (arr[i] != -1) continue;

            for (int j=0; j<n; j++) {
                if ((i*j)%n == 1) {
                    arr[i] = j;
                    arr[j] = i;
                }
            }
        }
    } else {
        std::cout << "Could not allocate memory" << std::endl;
    }


    return 0;
}

int task5(int *& arr, int n) {

    task5_1(arr, n);

    if (arr!= nullptr) {
        for (int i=0; i<n; i++) {
            if (arr[i]!=-1) {
                std::cout << 1 << "/" << i << " = " << arr[i] << std::endl;
            } else {
                std::cout << "1/" << i << " is not divisible" << std::endl;
            }
        }
    } else {
        std::cout << "Memory can not be allocated!\n" ;
    }

    return 0;

}

int task6(int *arr, int n, int a) {

    if (arr == nullptr) task5_1(arr, n);

    if (arr != nullptr) {
        if (arr[a] != -1)  {
            std::cout << "1/" << a << " = " << arr[a] << std::endl;
        } else {
            std::cout << "1/" << a << " can not be calculated" << std::endl;
        }
    } else {
        std::cout << "Could not allocate memory" << std::endl;
    }


    return 0;
}

int task7(int n, int a) {

    int tmp=n, tmp1=n, tmp2=a;
    unsigned cnt=0;


    do {
        tmp = tmp1;
        tmp1 = tmp2;
        tmp2 = tmp%tmp1;
        if (tmp2==0) break;
        cnt++;
    } while(tmp1%tmp2!=0);


    int *table[4];
    for (int i=0; i<4; i++) table[i] = new int[cnt+2]{0};
    if (table[0] && table[1] && table[2] && table[3]) {



        table[0][0] = n;
        table[0][1] = a;
        table[1][1] = n/a;
        table[2][0] = table[3][1] = 1;

        for (unsigned i=2; i<cnt+2; i++) {
            table[0][i] = table[0][i-2]%table[0][i-1];
            table[1][i] = table[0][i-1]/table[0][i];
            table[2][i] = table[1][i-1]*table[2][i-1] + table[2][i-2];
            table[3][i] = table[1][i-1]*table[3][i-1] + table[3][i-2];
        }

        if (table[0][cnt+1] == 1 && table[3][cnt+1] != -1)  {
            std::cout << "1/" << a << " = " << table[3][cnt+1] << std::endl;
        } else {
            std::cout << "1/" << a << " is not divisible" << std::endl;
        }

        for (int i=0; i<4; i++) {
            delete [] table[i];
            table[i] = nullptr;
        }

    } else {
        std::cout << "Could not allocate memory" << std::endl;
    }

    return 0;
}

int task8(int *& arr, int n, int a, int b) {

    if (arr == nullptr) task5_1(arr, n);

    if (arr != nullptr) {
        if (arr[b] != -1)  {
            std::cout << a << "/" << b << " = " << (a*arr[b])%n << std::endl;
        } else {
            std::cout << "-1" << std::endl;
        }
    } else {
        std::cout << "Could not allocate memory" << std::endl;
    }

    return 0;
}

int task9(int *arr, int n, int num, int exp) {

    if (arr == nullptr) task5_1(arr, n);

    if (arr != nullptr) {

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
            if (arr[new_num]==-1) {
                std::cout << "Can not be calculated!" << std::endl;
                return 0;
            } else {
                new_num = arr[new_num];
            }
        }
        std::cout << num << " to the power of " << ((negative)?"-":"") << exp << " is " << new_num << std::endl;


    } else {
        std::cout << "Could not allocate memory" << std::endl;
    }

    return 0;

}

int task10(int *arr, int n, int num, int exp) {

    if (arr == nullptr) task5_1(arr, n);

    if (arr != nullptr) {

        bool negative = (exp<0)?true:false;
        if (negative) exp*=-1;

        int new_num=1;

        if (num==1 || exp==0) {
            new_num=1;
        } else if (num==0) {
            new_num = 0;
        } else if (exp == 0) {
            new_num = 1;
        }else if (exp == 1) {
            new_num=num;
        } else {
            int k=1, tmp=exp;

            while (tmp/2!=0) {
                tmp/=2;
                k++;
            }

            bool *bits = new bool[k];
            long *exponents = new long[k];

            if (bits != nullptr && exponents !=nullptr) {
                tmp=exp;

                for (int i=0; i<k; i++) {
                    bits[i]=tmp%2;
                    tmp/=2;
                }

                exponents[0] = num;
                for (int i=1; i<k; i++) {
                    exponents[i] = (exponents[i-1]*exponents[i-1])%n;
                }
                for (int i=0; i<k; i++) std::cout << exponents[i] << std::endl;

                for (int i=0; i<k; i++) {
                    if (bits[i]) new_num=(new_num*exponents[i])%n;
                }

                delete [] bits;
                bits = nullptr;

                delete [] exponents;
                exponents = nullptr;


            } else {

                if (exponents != nullptr) {
                    delete [] exponents;
                    exponents = nullptr;
                }
                if (bits != nullptr) {
                    delete [] bits;
                    bits = nullptr;
                }

                std::cout << "Memory could not be allocated" << std::endl;
                return 0;
            }


        }

        if (negative) {
            if (arr[new_num]==-1) {
                std::cout << "Can not be calculated!" << std::endl;
                return 0;
            } else {
                new_num = arr[new_num];
            }
        }
        std::cout << num << " to the power of " << ((negative)?"-":"") << exp << " is " << new_num << std::endl;


    } else {
        std::cout << "Could not allocate memory" << std::endl;
    }


    return 0;


}


int task11 (int *&arr, int n, int num) {

    if (arr == nullptr) task12_1(arr, n);

    if (arr != nullptr) {

        std::cout << num << " is " << ((arr[num])?"":"not ") << "a primitive root" << std::endl;

    } else {
        std::cout << "Could not allocate memory" << std::endl;
    }

    return 0;
}

int task12_1 (int *&arr, int n) {

    if (arr != nullptr) {
        delete [] arr;
        arr = nullptr;
    }

    arr = new int[n]{0};


    int cnt=cnt_s_nums(n);
    int *tmp_arr = new int[cnt];

    if (arr != nullptr && tmp_arr != nullptr) {
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

            if (distinctVals(tmp_arr, cnt) && okay==true) {
                arr[i] = 1;
            }

        }

    } else {
        if (arr != nullptr) {
            delete [] arr;
            arr = nullptr;
        }
        if (tmp_arr != nullptr) {
            delete [] tmp_arr;
            tmp_arr = nullptr;
        }
        std::cout << "Memory could not be allocated" << std::endl;
        return 0;
    }


    return 0;
}

int task12(int *&arr, int n) {

    task12_1(*&arr, n);

    if (arr != nullptr) {

        int cnt=0;
        for (int i=2; i<n; i++) if (arr[i]==1) cnt++;

        if (cnt) {

            if (cnt>1) {
                std::cout << "The primitive roots are\n";
            } else {
                std::cout << "The primitive root is\n";
            }

            for (int i=2; i<n; i++) if (arr[i]==1) std::cout << i << "\n";

        } else {
            std::cout << "There are no primitive roots\n";
        }
    } else {
        std::cout << "Memory can not be allocated";
    }

    return 0;
}

int task13 (int *arr, int n, int base, int num) {

    if (arr == nullptr) task12_1(arr, n);

    if (arr != nullptr) {

        if (arr[base]==1 && num>=1 && gcd(num, n)) {
            int res=0;

            if (num!=1) {
                int tmp=1;
                do {
                    tmp=(tmp*base)%n;
                    res++;
                } while (tmp!=num);
            }

            std::cout << "dlog" << base << "(" << num << ") = " << res << std::endl;

        } else {
            std::cout << -1 << std::endl;
        }


    } else {
        std::cout << "Could not allocate memory" << std::endl;
    }

    return 0;
}

int task14(int n) {

    bool simple=true;
    if (simple) {
        for (int i=2; i<=sqrt(n); i+=2) {
            if (n%i==0) {
                simple=false;
                break;
            }
        }
    }

    std::cout << "Z(" << n << ") is " << ((simple)?"":"not ") << "a finite field!\n";

    return 0;

}
