//Finding GCD using Euclid's algorithm.

#include<stdio.h>

int gcd(int a,int b){
    if(a==0) return b;
    return gcd(b%a,a);
}

int main(){
    int a,b;
    printf("Enter the two numbers to find GCD:");
    scanf("%d%d",&a,&b);
    printf("GCD(%d,%d) : %d ",a,b,gcd(a,b));
    return 0;
}
