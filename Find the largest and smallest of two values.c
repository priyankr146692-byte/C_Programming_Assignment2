#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("Largest number is: %d\n", num1);
        printf("Smallest number is: %d\n", num2);
    } else if (num2 > num1) {
        printf("Largest number is: %d\n", num2);
        printf("Smallest number is: %d\n", num1);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
