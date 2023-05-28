#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

main()
{

       int n, m;
       int mass[100][100];
       int cache, globcache;

       printf("Enter number n elements  ");
       scanf("%i", &n);

       printf("Enter number n elements  ");
       scanf("%i", &m);

       if ((n > 1) && (n < 100) && (m > 1) && (m < 100))
       {

              for (int j = 0; j < m; j++)
              {
                     for (int i = 0; i < n; i++)
                     {
                            scanf("%i", &mass[i][j]);
                     }
                     globcache = mass[0][j];
                     mass[0][j] = mass[n - 1][j];
                     mass[n - 1][j] = globcache;
              }

              for (int j = 0; j < m; j++)
              {

                     printf("%\n\n");
                     for (int i = 0; i < n; i++)
                     {

                            printf("%3i", mass[i][j]);
                     }
              }
       }
       else
       {
              printf("Enter number n and m from 2...100");
       }

       getch();
}
