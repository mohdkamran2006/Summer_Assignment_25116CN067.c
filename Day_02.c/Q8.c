#include<stdio.h>

int main() {
    int rev = 0, d, n, original;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;   // Store original number

    while(n != 0) {
        d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
    }

    if(original == rev)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}