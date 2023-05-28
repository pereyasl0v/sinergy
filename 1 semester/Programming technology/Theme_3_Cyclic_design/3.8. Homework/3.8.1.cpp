#include <stdio.h>
#include <conio.h>

main()
{
int i = 0, n, numb;
int a, cachemax, cachemin, max, min;
float average, sum;

       printf("Enter amount n elements \n");
       scanf("%i", &n);
       if (n > 1)
       {
              numb = numb + 1;
              printf("Enter element number  %i      ", numb);
              scanf("%i", &a);

              cachemax = a;
              cachemin = a;
              sum = a;

              for (; i < n - 1; i++)
              {

                     numb = numb + 1;

                     printf("Enter element number  %i      ", numb);
                     scanf("%i", &a);

                     sum = sum + a;
                     average = sum / n;

                     if (a > cachemax)
                     {
                            cachemax = a;
                     }
                     else
                     {
                            if (a < cachemin)
                            {
                                   cachemin = a;
                            }
                     }
              }
              printf("largest number %i \n", cachemax);
              printf("smallest number %i \n", cachemin);
              printf("Sum elements %f \n", sum);
              printf("Average elemets %f \n", average);
       }
       else
       {
              printf("Error , enter number from 2... ");
       }

       getch();
}
