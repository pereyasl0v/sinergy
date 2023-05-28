#include <stdio.h>

main()
{
    int a, b;

    printf("Enter 2 numbers:");
    printf("Number 1 = ");
    scanf("%i", &a);
    printf("Number 2 = ");
    scanf("%i", &b);

    if (a > b)
    {
        printf("Number 1 > Number 2");
    }
    else
    {
        if (a == b)
        {
            printf("Number 1 = Number 2");
        }
        else
        {
            printf("Number 1 < Number 2");
        }
    }
}
