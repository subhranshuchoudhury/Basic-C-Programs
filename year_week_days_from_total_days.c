#include<stdio.h>

int main()
{
  int totaldays,year,days,week;

  printf("Total Days: ");
  scanf("%d",&totaldays);
  year = totaldays/365;
  week = (totaldays - year*365)/7; //or --> (totaldays % 365)/7;
  days = (totaldays - (year*365+week*7));

  printf("\nYear: %d\nWeek: %d\nDays: %d",year,week,days);
  return 0;
}
