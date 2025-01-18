#include <stdio.h>
int max(int *x, int *y) {
    return (*x > *y) ? *x : *y;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("Maximum: %d\n", max(&a, &b));
    return 0;
}
