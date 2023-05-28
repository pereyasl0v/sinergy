#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

int masrand(int size, int massive[])
{

  srand(time(NULL));

  for (int i = 0; i < size; i++)
  {

    massive[i] = rand() % 10;
  }
  for (int i = 0; i < size; i++)
  {
    printf("%3i ", massive[i]);
  }
  return 0;
  getch();
}

main()
{

  int n, m;
  int mas[100], mas2[100];

  printf("Enter size of massive to 1...100 \n");
  scanf("%i", &n);
  if ((n > 1) & (n < 101))
  {
    masrand(n, mas);
  }
  else
  {
    printf("size error");
  }

  printf("\n Enter size of massive to 1...100 \n");
  scanf("%i", &m);
  if ((m > 1) & (m < 101))
  {

    masrand(m, mas2);
  }
  else
  {
    printf("size error");
  }
  getch();
}
