#include <stdio.h>
float areaOfcircle(float argument)
{
    float area;
    area = 3.14 * argument * argument;
    return area;
}
int main()
{
    float argument;

    printf("Enter the radius of circle : ");
    scanf("%f", &argument);

    printf("Area of circle : %.2f\n", areaOfcircle(argument));
    return 0;
}
