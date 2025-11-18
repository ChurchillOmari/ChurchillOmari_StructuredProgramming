#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
int main()
{
     float radius, surfaceArea;

    // Ask the user for radius
    printf("Enter the radius of the sphere: ");
    scanf("%f", radius);

    // Calculate surface area of the sphere
    surfaceArea = 4 * PI * radius * radius;

    // Output the result
    printf("The surface area of the sphere is: %.2f\n", surfaceArea);

    return 0;
}
