#include <stdio.h>
#include <string.h>
#include <conio.h>

main()
{

       char str[100];

       gets(str);

       for (int n = 0; n < strlen(str); n++)
       {
              str[n] = str[n + 1];
       }

       puts(str);

       getch();
}
