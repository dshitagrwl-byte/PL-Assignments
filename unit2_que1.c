//order of execution of operators
#include <stdio.h>

int main()
{
    int a, b, c;

    a = 10 + 5 * 2;
    b = (10 + 5) * 2;
    c = 20 / 5 + 3;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    return 0;
}

//output: a = 20
//b = 30
//c = 7
