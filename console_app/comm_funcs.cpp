#include "comm_funcs.h"

int printArr (int ** arr, int n) {

    using namespace std;

    if (arr != nullptr && n > 0 && arr[0] != nullptr && arr[1] != nullptr) {

        for (int i=0; i<n; i++) {
            if (arr[1][i] != -1) {
                cout << "1/" << arr[0][i] << " = " << arr[1][i] << endl;
            } else {
                cout << "1/" << arr[0][i] << " is not divisible" << endl;
            }
        }

    }
    cout << endl << endl;

    return 0;
}

int enterNumber (int &num, int mini, int maxi) {
    using namespace std;


    char ch[50];
    bool correct = true;
    int i=0;

    do {
        do {
            correct = true;
            cin.getline(ch,50);
            if (strlen(ch)==0) {
                correct=false;
                continue;
            }
            i=0;
            if (ch[0]=='-' && strlen(ch) > 1) i++;

            for (; i<int (strlen(ch)); i++) {
                if (!(ch[i]>='0' && ch[i]<='9')) {
                    correct = false;
                    break;
                }
            }

            if (!correct) cout << "Incorrect number!" << endl;

        }while (!correct);

        num = 0;
        i=0;
        if (ch[0]=='-') i++;
        for (; i<int(strlen(ch)); i++) {
            num = num*10 + (ch[i]-'0');
        }
        if (ch[0]=='-') num*=-1;
        if (!(num >= mini && num <= maxi)) cout << "The value can not be " << num << endl;

    } while (!(num >= mini && num <= maxi));

    return 0;
}


int gcd (int a, int b) {

    int tmp=a, tmp1=a, tmp2=b;

    while(tmp1%tmp2!=0) {
        tmp = tmp1;
        tmp1 = tmp2;
        tmp2 = tmp%tmp1;
        if (tmp2==0) break;
    }

        return tmp2;
}

bool distinctVals(int *arr, int n) {

    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (arr[i]==arr[j]) return 0;
        }
    }


    return 1;
}

int cnt_s_nums(int n) {
    int cnt=0;
    for (int i=1; i<n; i++) {
        if (gcd(i,n)==1) cnt++;
    }
    return cnt;

}









