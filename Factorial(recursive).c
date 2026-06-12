#include <stdio.h>

int factorial_rec(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial_rec(n - 1);
}

int main() {
    printf("Factorial(5) recursively = %d\n", factorial_rec(5));
    return 0;
}
