#include<stdio.h>

int main() {
    long long int pro = 1, d, n;

    printf("Enter a number: ");
    scanf("%lld", &n);

    while(n != 0) {
        d = n % 10;
        pro *= d;
        n = n / 10;
    }

    printf("Product of digits: %lld\n", pro);

    return 0;
}