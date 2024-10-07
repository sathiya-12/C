#include <stdio.h>
#include <math.h>

int main() {
    int i, n, r, sum;

    printf("Armstrong numbers between 100 and 999 are:\n");

    for (i = 100; i <= 999; i++) {
        n = i;
        sum = 0;

        while (n != 0) {
            r = n % 10;
            sum += r * r * r;
            n /= 10;
        }

        if (sum== i) {
            printf("%d\n", i);
        }
    }

    return 0;
}

