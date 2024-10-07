#include <stdio.h>

void printNaturals(int n) {
    if (n <= 0) {
        return;
    }

    printNaturals(n -1);
    printf("%d ", n);
}

int main()
{
    int n = 10;
    printf("First %d natural numbers are: ", n);
    printNaturals(n);
    printf("\n");

}
