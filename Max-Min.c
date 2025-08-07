#include <stdio.h>
int main() {
    int a, b, c;
    int sum, difference, product;
    float quotient;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    difference = a - b - c;
    product = a * b * c;
    if (b != 0) {
        quotient = (float)a / b;
        printf("Quotient (a / b): %.2f\n", quotient);
    } else {
        printf("Cannot divide by zero (b = 0)\n");
    }
    printf("Sum: %d\n", sum);
    printf("Difference (a - b - c): %d\n", difference);
    printf("Product: %d\n", product);
    return 0;
}
