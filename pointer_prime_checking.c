//Prime or Not using pointer.
#include <stdio.h>
int main()
{
    int number,x,y=0,*p;
    printf("Enter Number: ");
    scanf("%d",&number);
    p=&number; //give address to pointer.
    
    for(x=0;x<=*p;x++)
    {
        if(*p%2==0)
        {
            y++; //counter.
        }
    }
    
    if (y==2)
    {
        printf("--> Prime");
    }
    else
    {
        printf("--> Not Prime");
    }
    
    return 0;
}
