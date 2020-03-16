#include <stdio.h>
#include <stdlib.h>

int FibonacciRec (int n, int Fib[]){

    if (n <= 1) {
        return 1;
    }
    
    if (Fib[n] != -1) {
        return Fib[n];
    }

    Fib[n] = FibonacciRec (n - 1, Fib) + FibonacciRec (n-2, Fib);

    return Fib[n];
}

int main (void) {
    static int Fibonacci[50];
    int sequence_size;

    printf ("Insert the number of the elements of the sequence of Fibonacci: ");
    scanf ("%d", &sequence_size);

    for (int i = 0; i < 50; i++) {
        Fibonacci[i] = -1;
    }
     
    FibonacciRec (sequence_size, Fibonacci);

    printf ("1, 1, ");

    for (int i = 2; i < sequence_size; i++ ) {
        printf ("%d, ", Fibonacci[i]);
    }

    printf ("\n");

    return 0;
} 
