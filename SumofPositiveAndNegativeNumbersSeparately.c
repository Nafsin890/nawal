#include <stdio.h>

int main() {
    int n, num, i;
    int positiveSum = 0, negativeSum = 0;

    printf("How many numbers? ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if(num > 0)
            positiveSum += num;
        else if(num < 0)
            negativeSum += num;
    }

    printf("Sum of Positive Numbers = %d\n", positiveSum);
    printf("Sum of Negative Numbers = %d\n", negativeSum);

    return 0;
}
