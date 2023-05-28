#include <stdio.h>
#include <conio.h>

main()
{

     int mas[100];
     int i;
     int n;

     printf("Enter the number of elements ");
     scanf("%i", &n);

     if ((n > 0) && (n < 100))
     {

          for (i = 0; i < n; i++)
          {
               printf("Enter number...");
               scanf("%i", &mas[i]);
          }
          for (i = 0; i < n; i++)
          {
               printf("%4i", mas[i]);
          }
     }
     else
     {
          printf("Enter the number of elements from 0...100");
     }
     getch();
}
