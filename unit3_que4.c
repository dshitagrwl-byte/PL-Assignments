//factorial of a number using a user-defined function
#include <stdio.h>

int factorial(int n)
{
    int i, fact = 1;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = factorial(num);

    printf("Factorial = %d", result);

    return 0;
}

//output: Enter a number: 5
//Factorial = 120
// n! = 1*2*3*...*n
