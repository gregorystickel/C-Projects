#include <stdio.h>

int main()
{
    int numbers[2]; //define the array
    printf("Please enter first number:");
    scanf("%d", &numbers[0]);
    printf("Please enter second number:");
    scanf("%d", &numbers[1]);
    printf("Answer is: %d", numbers[0]+numbers[1]);
    return 0;
}
