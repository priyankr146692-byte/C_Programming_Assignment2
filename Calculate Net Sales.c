#include <stdio.h>

int main() {
    float gross_sales, discount, net_sales;
    printf("Enter Gross Sales: ");
    scanf("%f", &gross_sales);

    if (gross_sales > 20000) {
        discount = gross_sales * 0.10;
    } else if (gross_sales > 10000) {
        discount = gross_sales * 0.05;
    } else {
        discount = 0;
    }

    net_sales = gross_sales - discount;
    printf("Net Sales: %.2f\n", net_sales);

    return 0;
}
