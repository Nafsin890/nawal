#include <stdio.h>

int divide(int a, int b) {
    if (b != 0)
        return a / b;
    else
        return 0;
}

int main() {
    printf("20 / 4 = %d\n", divide(20,4));
    return 0;
}
