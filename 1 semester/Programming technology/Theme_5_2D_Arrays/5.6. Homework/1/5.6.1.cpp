#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

main()
{
        int num = 0;
        int n, m;
        int mass[100][100];
        int cache, globcache;
        bool fl;
        fl = true;

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
                }

                while (fl)
                {

                        fl = false;

                        for (int i = 0; i < n; i++)
                        {

                                for (int j = 0; j < m; j++)
                                {
                                        for (int i = 0; i < n - 1; i++)
                                        {

                                                if (mass[i][j] > mass[i + 1][j])
                                                {

                                                        cache = mass[i][j];
                                                        mass[i][j] = mass[i + 1][j];
                                                        mass[i + 1][j] = cache;
                                                        fl = true;
                                                        num++;
                                                }
                                        }
                                }
                        }
                }

                for (int j = 0; j < m; j++)
                {

                        printf("\n\n");
                        for (int i = 0; i < n; i++)
                        {

                                printf("%3i", mass[i][j]);
                        }
                }
                printf(" \n\n Number of iteration %i", num);
        }
        else
        {
                printf("Enter number n and m from 2...100");
        }

        getch();
}
