//Area of circle
#include <stdio.h>

int main()
{
    float radius, area;
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    area = 3.14 * radius * radius;
    
    printf("Area of the circle = %.2f", area);
    
    return 0;
}

//Output: Enter the radius of the circle: 5
Area of the circle = 78.50
Formula: π*r*r
