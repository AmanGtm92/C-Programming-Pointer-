#include <stdio.h>
// Multiplication of two numbers using pointer

int multiply(int *x, int *y) {
    return *x * *y;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("Product: %d\n", multiply(&a, &b));
    return 0;
}
