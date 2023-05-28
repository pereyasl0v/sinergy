#include <stdio.h>
#include <conio.h>

int login, password;

main()
{
    printf("Enter your login, please ");
    scanf("%i", &login);
    printf("Enter your password , please ");
    scanf("%i", &password);

    if (((login == 111) && (password == 222)) || ((login == 333) && (password == 444)) || ((login == 555) && (password == 666)))
    {

        printf("Welcome");
    }
    else
    {
        printf("Wrong login or password");
    }
    getch();
}
