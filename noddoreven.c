#include<stdio.h>
#include<math.h>

int main(){

    int counter=0,number;

    printf("enter the number for printing EVEN and ODD: ");
    scanf("%d",&number);

    while (counter<=number)
    {
        if (counter%2==0) //for odd use not equal.
        {
            printf("Even:%d\n",counter);
            
        }
        else
        {
            printf("Odd:%d\n",counter);
        }
        
        
        counter ++;
        
    }
    

    return 0;
}