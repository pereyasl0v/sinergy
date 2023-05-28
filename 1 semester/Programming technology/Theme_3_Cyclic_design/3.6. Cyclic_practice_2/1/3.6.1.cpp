#include <stdio.h>
#include <conio.h>

main()
{

       int c = 5;
       int i;

       for (i = 1; i < 10; i++)
       {

              printf("%i * %i = %i\n", c, i, c * i);
       }
       getch();
}
