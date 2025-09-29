#include <stdio.h>

int main() {
    int sub1, sub2, sub3, total, avg;
    printf("Enter marks for three subjects: ");
    scanf("%d %d %d", &sub1, &sub2, &sub3);

    if (sub1 < 35 || sub2 < 35 || sub3 < 35) {
        printf("Fail\n");
    } else {
        total = sub1 + sub2 + sub3;
        avg = total / 3;

        printf("Total: %d\n", total);
        printf("Average: %d\n", avg);

        if (avg >= 70) {
            printf("Grade: Distinction\n");
        } else if (avg >= 60) {
            printf("Grade: First Class\n");
        } else if (avg >= 50) {
            printf("Grade: Second Class\n");
        } else {
            printf("Grade: Third Class\n");
        }
    }

    return 0;
}