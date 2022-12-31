#include<stdio.h>
int dvsr(int n) {
    int sum=0;
    for (int i=1;i<n;i++) {
        if (n%i==0) {
            sum+=i;
        }
    }
    return sum;
}
int main() {
    int n;
    scanf("%d",&n);
    if (dvsr(n)==n) {
        printf("PERFECT");
    } else if (dvsr(n)<n) {
        printf("DEFICIENT");
    } else if (dvsr(n)>n) {
        printf("ABUNDANT");
    }
    return 0;
}