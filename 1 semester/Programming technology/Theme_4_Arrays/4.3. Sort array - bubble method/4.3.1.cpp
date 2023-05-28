#include <stdio.h>
#include <conio.h>

main()
{

     int mas[100];
     int n;
     int cache;
     int num = 0;

     printf("Enter the number of elements ");
     scanf("%i", &n);

     if ((n > 0) && (n < 100))
     {

          for (int i = 0; i < n; i++)
          {
               printf("Enter number...");
               scanf("%i", &mas[i]);
          }

          for (int i = 0; i < n; i++)
          {
               for (int i = 0; i < n - 1; i++)
               {

                    if (mas[i] > mas[i + 1])
                    {

                         cache = mas[i];
                         mas[i] = mas[i + 1];
                         mas[i + 1] = cache;
                    }
               }
          }

          for (int i = 0; i < n; i++)
          {
               printf("%6i", mas[i]);
          }
     }
     else
     {
          printf("Enter the number of elements from 0...100");
     }
     getch();
}
