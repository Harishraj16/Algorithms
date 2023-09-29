#include <stdio.h>

int Middle(int m, int n) {
    int c = 2;
    int fm[100];
    int fm_index = 0;
    while (m > 1) {
        if (m % c == 0) {
            fm[fm_index] = c;
            fm_index++;
            m = m / c;
        } else {
            c = c + 1;
        }
    }

    int d = 2;
    int fn[100];
    int fn_index = 0;
    while (n > 1) {
        if (n % d == 0) {
            fn[fn_index] = d;
            fn_index++;
            n = n / d;
        } else {
            d = d + 1;
        }
    }

    int cf[100];
    int cf_index = 0;
    for (int i = 0; i < fm_index; i++) {
        for (int j = 0; j < fn_index; j++) {
            if (fm[i] == fn[j]) {
                cf[cf_index] = fm[i];
                cf_index++;
                break;
            }
        }
    }

    int result = 1;
    for (int i = 0; i < cf_index; i++) {
        result = result * cf[i];
    }

    return result;
}

int main() {
    int m = 5;
    int n = 10;
    int result = Middle(m, n);
    printf("%d\n", result);
    return 0;
}
