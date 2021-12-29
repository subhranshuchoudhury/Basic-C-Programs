#include<stdio.h>
#include<math.h>

int main(){

    int store[3][3],i,j,sum=0,pro=1;

for ( i = 0; i < 3; i++)
{
    for ( j = 0; j < 3; j++)
    {
        printf("Enter Number: ");
        scanf("%d",&store[i][j]);
    }
    
}

for ( i = 0; i < 3; i++)
    {
        printf("\n");
        for ( j = 0; j < 3; j++)

        {
            printf("%d\t",store[i][j]);
            //printf("\n");

            if (store[i][j]%2==0)
        {
            sum=sum+store[i][j];
        }
        else
        {
            pro=pro*store[i][j];
        }
        }
    }

    printf("\nSum of Even: %d\nProduct of Odd: %d\n",sum,pro);



return 0;

}


