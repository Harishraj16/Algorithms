#include<stdio.h>

int ConsecutiveIntegerChecking(int a, int b) {
    int t = a < b ? a : b;
    if (a % t == 0 && b % t == 0) {
        return t;
    } else {
        while (t > 0) {
            t--;
            if (a % t == 0 && b % t == 0) {
                return t;
            }
        }
    }
    return 1; // If no common divisor found other than 1
}

int main() {
    int a, b;
    printf("Enter Two numbers to find GCD: ");
    scanf("%d%d", &a, &b);
    int gcd = ConsecutiveIntegerChecking(a, b);
    printf("GCD(%d,%d): %d", a, b, gcd);
    return 0;
}
