#include <stdio.h>

void main()
{
   float mark1,mark2,summark,avg;
   char name[20];
   int rollno;
   
   
    printf("ENTER YOUR NAME: \n");
    scanf("%s",name);
    printf("ENTER YOUR ROLL NO: ");
    scanf("%d",&rollno);
    printf("ENTER YOUR MARK 1: ");
    scanf("%f",&mark1);
    printf("ENTER YOUR MARK 2: ");
    scanf("%f",&mark2);
    
    printf("THE RESULT OF %s ",name);
    printf("WITH ROLL NO: %d\n",rollno);
    summark = mark1+mark2;
    avg = summark/2;
    
    printf("SECURED: %f FROM 200\nYOUR WHOLE PERCENTAGE IS: %F",summark,avg);
    
}


