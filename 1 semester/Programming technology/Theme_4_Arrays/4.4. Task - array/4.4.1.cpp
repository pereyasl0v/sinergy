#include <stdio.h>
#include <conio.h>

main()
{

        int n;
        int mass[100];
        int max, min;
        float average;
        int sum = 0;

        printf("Enter number of elements...");
        scanf("%i", &n);

        if ((n > 0) && (n < 100))
        {

                for (int i = 0; i < n; i++)
                {

                        printf("Enter number...");
                        scanf("%i", &mass[i]);
                        sum = sum + mass[i];
                        min = max = mass[0];

                        if (mass[i] > max)
                        {
                                max = mass[i];
                        }
                        if (mass[i] < min)
                        {
                                min = mass[i];
                        }
                }

                average = (float)sum / n;
                printf(" Min %i \n Max %i \n Sum %i \n Average %f \n", min, max, sum, average);
        }
        else
        {
                printf("Enter number of elements from 0...100");
        }

        getch();
}
