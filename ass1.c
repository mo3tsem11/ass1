#include <stdio.h>

int main() {
    int num, i = 1, isPerfectSquare = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive number.\n");
        return 0;
    }

    while (i * i <= num) {
        if (i * i == num) {
            isPerfectSquare = 1; // true
            break;
        }
        i++;
    }

    if (isPerfectSquare)
        printf("%d is a perfect square.\n", num);
    else
        printf("%d is not a perfect square.\n", num);

    return 0;
}
