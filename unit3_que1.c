//display array elements and their memory addresses
#include <stdio.h>

int main()
{
    int a[3], i;
    float b[3];
    char c[3];

    printf("Enter 3 integer elements:\n");
    for (i = 0; i < 3; i++)
        scanf("%d", &a[i]);

    printf("Enter 3 float elements:\n");
    for (i = 0; i < 3; i++)
        scanf("%f", &b[i]);

    printf("Enter 3 character elements:\n");
    for (i = 0; i < 3; i++)
        scanf(" %c", &c[i]);

    printf("\nInteger Array:\n");
    for (i = 0; i < 3; i++)
        printf("%d\t%p\n", a[i], (void *)&a[i]);

    printf("\nFloat Array:\n");
    for (i = 0; i < 3; i++)
        printf("%f\t%p\n", b[i], (void *)&b[i]);

    printf("\nCharacter Array:\n");
    for (i = 0; i < 3; i++)
        printf("%c\t%p\n", c[i], (void *)&c[i]);

    return 0;
}
