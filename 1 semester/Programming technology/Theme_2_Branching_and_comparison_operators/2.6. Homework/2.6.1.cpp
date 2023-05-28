#include <stdio.h>
#include <conio.h>

int day, month, year;

main()
{

     printf("Enter day   ");
     scanf("%i", &day);
     if ((day > 0) && (day < 31))
     {

          printf("Enter month  ");
          scanf("%i", &month);
          if ((month > 0) && (month < 12))
          {

               printf("Enter year   ");
               scanf("%i", &year);

               if (year > 0)
               {
                    // ��������� � ������ ����������� ����
                    int leap_year = (year % 4);
                    switch (leap_year)
                    {
                    case 0:
                    {
                         printf("Leap-year. ");
                         break;
                    }
                    case 1:
                    {
                         printf("Don't leap-year. ");
                         break;
                    }
                    case 2:
                    {
                         printf("Don't leap-year. ");
                         break;
                    }
                    case 3:
                    {
                         printf("Leap-year. ");
                         break;
                    }
                    default:
                    {
                         printf("Error");
                    }
                    } // ��������� ����� ����������� ����
                      //  ��������� � ������ ���������� ���������
                    int east_cal = (year % 12);
                    switch (east_cal)
                    {
                    case 0:
                    {
                         printf("Year of Monkey. ");
                         break;
                    case 1:
                    {
                         printf("Year of Rooster. ");
                         break;
                    }
                    case 2:
                    {
                         printf("Year of Dog. ");
                         break;
                    }
                    case 3:
                    {
                         printf("Year of Pig. ");
                         break;
                    }
                    case 4:
                    {
                         printf("Year of Rat. ");
                         break;
                    }
                    case 5:
                    {
                         printf("Year of Bull. ");
                         break;
                    }
                    case 6:
                    {
                         printf("Year of Tiger. ");
                         break;
                    }
                    case 7:
                    {
                         printf("Year of Rabbit.  ");
                         break;
                    }
                    case 8:
                    {
                         printf("Year of Dragon. ");
                         break;
                    }
                    case 9:
                    {
                         printf("Year of Snake. ");
                         break;
                    }
                    case 10:
                    {
                         printf("Year of Horse. ");
                         break;
                    }
                    case 11:
                    {
                         printf("Year of Goat. ");
                         break;
                    }
                    default:
                    {
                         printf("Error");
                    }
                    } // ��������� � ������� ���������� ���������
                    } // ��������� � ������ ����� �������

                    if (((day >= 21) && (month == 12)) || ((day <= 20) && (month == 1)))
                    {
                         printf("Zodiac sign - Capricorn. ");
                    }
                    else
                    {
                         if (((day >= 21) && (month == 1)) || ((day <= 20) && (month == 2)))
                         {
                              printf("Zodiac sign - Aquarius. ");
                         }
                         else
                         {
                              if (((day >= 21) && (month == 2)) || ((day <= 20) && (month == 3)))
                              {
                                   printf("Zodiac sign - Fishes. ");
                              }
                              else
                              {
                                   if (((day >= 21) && (month == 3)) || ((day <= 20) && (month == 4)))
                                   {
                                        printf("Zodiac sign - Aries. ");
                                   }
                                   else
                                   {
                                        if (((day >= 21) && (month == 4)) || ((day <= 20) && (month == 5)))
                                        {
                                             printf("Zodiac sign - Calf. ");
                                        }
                                        else
                                        {
                                             if (((day >= 21) && (month == 5)) || ((day <= 20) && (month == 6)))
                                             {
                                                  printf("Zodiac sign - Twins. ");
                                             }
                                             else
                                             {
                                                  if (((day >= 21) && (month == 6)) || ((day <= 20) && (month == 7)))
                                                  {
                                                       printf("Zodiac sign - Crayfish. ");
                                                  }
                                                  else
                                                  {
                                                       if (((day >= 21) && (month == 7)) || ((day <= 20) && (month == 8)))
                                                       {
                                                            printf("Zodiac sign - Lion. ");
                                                       }
                                                       else
                                                       {
                                                            if (((day >= 21) && (month == 8)) || ((day <= 20) && (month == 9)))
                                                            {
                                                                 printf("Zodiac sign - Virgo. ");
                                                            }
                                                            else
                                                            {
                                                                 if (((day >= 21) && (month == 9)) || ((day <= 20) && (month == 10)))
                                                                 {
                                                                      printf("Zodiac sign - Scales. ");
                                                                 }
                                                                 else
                                                                 {
                                                                      if (((day >= 21) && (month == 10)) || ((day <= 20) && (month == 11)))
                                                                      {
                                                                           printf("Zodiac sign - Scorpion. ");
                                                                      }
                                                                      else
                                                                      {
                                                                           if (((day >= 21) && (month == 11)) || ((day <= 20) && (month == 12)))
                                                                           {
                                                                                printf("Zodiac sign - Sagittarius. ");
                                                                           }
                                                                      }
                                                                 }
                                                            }
                                                       }
                                                  }
                                             }
                                        }
                                   }
                              }
                         }

                    } // ��������� � ������ �������
               }      // ��������� ������
               else
               {
                    if (year < 0)
                    {
                         printf("Please, select year from 0...");
                    }
               }
          }
          else
          {
               if ((month > 12) || (month < 1))
                    ;
               {
                    printf("Please , select month from 1...12");
               }
          }
     }
     else
     {

          if ((day > 31) || (day < 0))
               ;
          {
               printf("Please , select day from 1...31");
          }
     }
     getch();
}
