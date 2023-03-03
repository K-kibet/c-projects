#include <stdio.h>

int main () 
{
    float x, y, area;
    printf("Enter value for x and y: ");
    scanf("%f%f", &x, &y);

    area = x * y;
    printf("The area is %1.3f\n", area);

    return 0;
}