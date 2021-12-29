#include<stdio.h>

void main()
{
    int choice;
    printf("\nChoose the day number: ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf ("Sunday");
        break;
    case 2:
        printf ("monday");
        break;
    case 3:
        printf ("tuesday");
        break;
    case 4:
        printf ("wednesday");
        break;
    case 5:
        printf ("thrusday");
        break;
    case 6:
        printf ("friday");
        break;
    case 7:
        printf ("saturday");
        break;
    
    default:
        printf("Enter a number between 1 t0 7");


        break;
    }
}