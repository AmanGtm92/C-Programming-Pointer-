#include <stdio.h>
// Reversing a number using pointer
void reverse(int *n) {
    int rev = 0;
    while (*n != 0) {
        rev = rev * 10 + (*n % 10);
        *n /= 10;
    }
    *n = rev;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    reverse(&n);
    printf("Reversed number: %d\n", n);
    return 0;
}
