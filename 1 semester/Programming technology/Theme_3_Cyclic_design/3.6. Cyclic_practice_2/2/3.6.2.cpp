#include <stdio.h>
#include <conio.h>

main()
{

     int answer = 7;
     int question = 0;

     printf("Hello , enter code number   \n");
     scanf("%i", &question);

     if (question == answer)
     {
          printf("You enter number 7 \n");
     }
     else
     {

          while (question != answer)
          {

               printf("Enter code number again   \n");
               scanf("%i", &question);

               if (question == answer)
               {
                    printf("You enter number 7 \n");
                    return 0;
               }

               if (question > 10)
               {
                    printf("your number larger 10   \n");
               }
               else
               {
                    if (question < 10)
                    {
                         printf("your number less 10 \n");
                    }
                    else
                    {
                         if (question == 10)
                         {
                              printf("your enter number 10   \n");
                         }
                    }
               }

               if (question % 2 == 0)
               {
                    printf("number is divisible by 2   \n");
               }
               else
               {
                    printf("number is not divisible by 2   \n");
               }

               if (question % 3 == 0)
               {
                    printf("number is divisible by 3   \n");
               }
               else
               {
                    printf("number is not divisible by 3   \n");
               }
          }
     }
     getch();
}
