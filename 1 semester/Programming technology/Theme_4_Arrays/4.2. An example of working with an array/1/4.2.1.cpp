#include <stdio.h>
#include <conio.h>

main()
{

       int mas[7];
       int i;

       for (i = 0; i < 7; i++)
       {
              printf("Enter number...");
              scanf("%i", &mas[i]);
       }
       for (i = 0; i < 7; i++)
       {
              printf("%2i", mas[i]);
       }
       getch();
}
