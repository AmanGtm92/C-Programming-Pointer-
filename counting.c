#include <stdio.h>
//Counting number of digits in a number using pointer

int count_digits(int *n) {
    int count = 0;
    while (*n != 0) {
        (*n) /= 10;
        count++;
    }
    return count;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Number of digits: %d\n", count_digits(&n));
    return 0;
}
