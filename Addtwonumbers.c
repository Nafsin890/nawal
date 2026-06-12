#include <stdio.h>

int add2(int a, int b) {
    return a + b;
}

int main() {
    int x = 5, y = 10;
    printf("Sum = %d\n", add2(x, y));
    return 0;
}
