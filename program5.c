#include <stdio.h>

int main()
{
    int numbers[10];

    /* populate the array */
    numbers[0]=10;
    numbers[1]=20;
    numbers[2]=30;
    numbers[3]=40;
    numbers[4]=50;
    numbers[5]=60;
    numbers[6]=70;
    numbers[7]=80;
    numbers[8]=90;
    numbers[9]=100;
    /* changed 7th number in array to number input by user*/
    printf("Please enter a number:");
    scanf("%d", &numbers[6]);
    /* print 7th number in the array */
    printf("The 7th number in the array is %d", numbers[6]+numbers[0]);
    return 0;

}
