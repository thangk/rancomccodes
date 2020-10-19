#include <stdio.h>

int main() {

    int a, b, c, d, e, f;

    printf("Enter first row: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Enter the second row: ");
    scanf("%d %d %d", &d, &e, &f);

    printf("\n\nThe matrix is: \n"
    "%d \t %d \t %d\n"
    "%d \t %d \t %d", a, b, c, d, e, f);

    return 0;
}