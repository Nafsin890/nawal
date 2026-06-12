#include <stdio.h>

int max2(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    printf("Max of 12 and 19 = %d\n", max2(12,19));
    return 0;
}
