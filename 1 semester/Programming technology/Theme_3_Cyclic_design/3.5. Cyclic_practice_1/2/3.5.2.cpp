#include <stdio.h>
#include <conio.h>

main()
{

        int a = 0;

        while (a < 15)
        {

                if (a % 2 == 0)
                {

                        printf("%i \n", a);
                }
                a = a + 1;
        }
        getch();
}
