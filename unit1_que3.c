//average of three numbers
#include <stdio.h>

int main()
{
    float a, b, c, average;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    average = (a + b + c) / 3;

    printf("Average = %.2f", average);

    return 0;
}

//output: Enter three numbers: 10 20 30
//Average = 20.00
//average = (a+b+c)/3
