#include <stdio.h>
//Calculating the square of a number using pointer

void square(int *x) {
    *x = *x * *x;
}

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    
    square(&a);
    printf("Square: %d\n", a);
    return 0;
}
