/*C program for fibonacci series without using a function */
#include <stdio.h>

int main()
{
    int i, n, a = 0, b = 1, show = 0;
    printf("\nEnter number of terms required in Fibonacci Series: ");
    scanf("%d", &n);
    printf("\nThe Fibonacci Series is:\n\n\n %d+%d+", a, b);
    /*Showing the first two terms of the Fibonacci Series */
    i = 2;
    /*i=2, since the first two terms of the series have already been shown */
    while (i<n)
    {
        show = a + b;
        a = b;
        b = show;
        ++i;
        printf("%d+", show);
    }
    getchar();
    return 0;
}
