#include <stdio.h>
#include <string.h>
#include <conio.h>

main()
{

  int n, m = 0;
  char str[100], str1[100];

  gets(str);

  n = strlen(str) - 1;

  for (m = 0; m < strlen(str) + 1; m++)
  {

    str1[m] = str[n];
    n--;
  }

  puts(str1);

  getch();
}
