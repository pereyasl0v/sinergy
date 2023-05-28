#include <stdio.h>
#include <string.h>
#include <conio.h>

main()
{

  int s;
  char str[100];

  gets(str);

  printf("Which character would you like to remove? \n");
  scanf("%i", &s);

  for (int i = s - 1; i < strlen(str); i++)
  {

    str[i] = str[i + 1];
  }

  puts(str);

  getch();
}
