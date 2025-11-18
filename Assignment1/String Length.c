#include <stdio.h>
#include <stdlib.h>

int main()
{
     char str[100];
    int length;

    // Ask the user to enter a string
    printf("Enter a string: ");
    scanf("%[^\n]s", str);   // reads until newline

    // Calculate length using strlen()
    length = strlen(str);

    // Display string and its length
    printf("You entered: %s\n", str);
    printf("Length of the string: %d\n", length);
    return 0;
}
