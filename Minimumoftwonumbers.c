#include <stdio.h>

int min2(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    printf("Min of 12 and 19 = %d\n", min2(12,19));
    return 0;
}
