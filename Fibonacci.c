
#include <stdio.h>

int main (void)
{
    int Fibonacci[30], i;

    Fibonacci[0] = 0;
    Fibonacci[1] = 1;

    for ( i = 2; i < 30; ++i)
        Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];

    for ( i = 0; i < 30; ++i)
        printf ("%i\n", Fibonacci[i]);
    getchar();
    return 0;
}
