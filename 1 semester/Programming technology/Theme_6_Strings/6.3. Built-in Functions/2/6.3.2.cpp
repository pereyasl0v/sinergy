#include <stdio.h>
#include <string.h>
#include <conio.h>

main()
{

    char cache;
    char str[100];

    gets(str);

    int q = strlen(str) - 1;

    printf("%c - last element of string\n", str[q]);

    cache = str[0];
    str[0] = str[q];
    str[q] = cache;

    printf("Last element changed places first element of string\n", str[q]);
    puts(str);

    getch();
}
