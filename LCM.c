#include <stdio.h>
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int lcm(int a, int b) {
    int gcdValue = gcd(a, b);
    return (a * b) / gcdValue;
}

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    int result = lcm(num1, num2);
    printf("%d", result);

    return 0;
}
