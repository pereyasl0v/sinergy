#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

main()
{

        int n, m;
        int mass[100][100];

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

                for (int j = 0; j < m; j++)
                {

                        printf("%\n\n");
                        for (int i = 0; i < n; i++)
                        {

                                printf("%3i", mass[i][j]);
                        }
                }

                printf("%\n\n\n\n");

                for (int j = 0; j < m; j++)
                {

                        printf("%\n\n");
                        for (int i = 0; i < n; i++)
                        {

                                printf("%3i", mass[j][i]);
                        }
                }
        }
        else
        {
                printf("Enter number n and m from 0...100");
        }

        getch();
}
