#include "comm_funcs.h"

int gcd (int a, int b) {

    if (a==0 && b == 0) return -1;
    if (a==0 && b != 0) return b;
    if (b==0 && a != 0) return a;
    int tmp=a, tmp1=a, tmp2=b;

    while(tmp1%tmp2!=0) {
        tmp = tmp1;
        tmp1 = tmp2;
        tmp2 = tmp%tmp1;
    }
        return tmp2;
}

bool distinct_vals(int *arr, int n) {

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


bool is_simple(int num) {

    int maxi = sqrt(num);
    for (int i=2; i<=maxi; i++) {
        if (num%i==0) return 0;
    }

    return 1;
}
