#include <stdio.h>
#include <stdlib.h>

int PowerRec (int base, int exp) {

    if (exp == 0) {
        return 1;
    } else {
        return base * PowerRec (base, exp-1);
    }
}

int main (void) {
    int x, y;

    printf ("Insert the values for the base and for the exponent: ");
    scanf ("%d %d", &x, &y);

    printf ("%d^%d = %d\n", x, y, PowerRec (x, y));

    return 0;
}