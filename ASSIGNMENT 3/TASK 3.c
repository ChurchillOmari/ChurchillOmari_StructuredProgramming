#include <stdio.h>
#include <stdlib.h>

int main()
{
   int count = 10;
    int *pCount = &count;  // Point to count

    // Modify the value of count using the pointer
    *pCount = 25;

    printf("The updated value of count is: %d\n", count);
return 0;
}
