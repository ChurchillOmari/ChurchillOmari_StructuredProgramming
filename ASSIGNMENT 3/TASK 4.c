#include <stdio.h>
#include <stdlib.h>

int main()
{   int num1 = 15, num2 = 20;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    int sum;

    // Add values using pointer dereferencing
    sum = *ptr1 + *ptr2;

    printf("The sum of %d and %d is: %d\n", *ptr1, *ptr2, sum);

    return 0;
}
