//print 6 digit passwords.
//wrongly programmed.

#include<stdio.h>
int main(){
    int i,count=0;

    for ( i = 0; i < 10; i++)
    {
        printf("00000%d",i);
        printf("\n");
        count++;
    }

    for ( i = 0; i < 100; i++)
    {
        printf("0000%d",i);
        printf("\n");
        count++;
    }

    for ( i = 0; i < 1000; i++)
    {
        printf("000%d",i);
        printf("\n");
        count++;
    }

    for ( i = 0; i < 10000; i++)
    {
        printf("00%d",i);
        printf("\n");
        count++;
    }

    

    for ( i = 0; i < 100000; i++)
    {
        printf("0%d",i);
        printf("\n");
        count++;
    }
    

    for ( i = 111111; i < 1000000; i++)
    {
        count++;
        printf("%d",i);
        printf("\n");
    }

    printf("\nTotal Count: %d",count);
    
    return 0;

}