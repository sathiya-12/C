#include <stdio.h>

int main() {
    int rows = 4;
    int i, j, num = 1;

    for (i = 1; i <= rows; i++) {
       num=(i%2==0) ? 2:1 ;
        for (j = 1; j <= i; j++) {
            printf("%d ", num);

        }
        printf("\n");
    }

    return 0;
}
