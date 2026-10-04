#include <stdio.h>

int main(void)
{

    float radius;
    float diameter;
    float circumference;
    float area;
    const float PI = 3.14159;

    printf("Please enter a radius of a circle: ");
    scanf("%f", &radius);
    diameter = 2 * radius;
    circumference = PI * diameter;
    area = PI * radius * radius;
    printf("The diameter of a circle with a radius of %.2f is %.2f\n", radius, diameter);
    printf("The circumference of a circle with a radius of %.2f is %.2f\n", radius, circumference);
    printf("The area of a circle with a radius of %.2f is %.2f\n", radius, area);

    return 0;
}

