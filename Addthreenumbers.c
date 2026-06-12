#include <stdio.h>

int add3(int a, int b, int c) {
    return a + b + c;
}

int main() {
    printf("Sum of 1,2,3 = %d\n", add3(1,2,3));
    return 0;
}
