#include <stdio.h>

int main() {
    int n, end, i, temp, d, sum;

    printf("Enter n and end: ");
    scanf("%d %d", &n, &end);

    printf("Armstrong Numbers:\n");

    for (i = n; i <= end; i++) {
        temp = i;
        sum = 0;

        while (temp != 0) {
            d = temp % 10;
            sum = sum + d * d * d;
            temp = temp / 10;
        }

        if (sum == i)
            printf("%d ", i);
    }

    return 0;
}