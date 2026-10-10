//sum of elements in a one-dimensional array
#include <stdio.h>

int main()
{
    int a[100], n, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("Sum = %d", sum);

    return 0;
}

//output: Enter the number of elements: 5
//Enter the elements:
//1 2 3 4 5
//Sum = 15
