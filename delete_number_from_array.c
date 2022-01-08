/* Write a program to delete a particular number 
from a array list.*/

#include <stdio.h>
int main()
{
    int i,j,key,index,a[10];

    for(i=0;i<10;i++)
    {
        printf("Enter Number:");
        scanf("%d",&a[i]);

    }
    printf("Enter Number to delete:");
    scanf("%d",&key);

    //operation for deleting number from array.
    index=9;
    for(i=0;i<=index;i++){
        if(a[i]==key)
        {
            for(j=i+1;j<=index;j++)
            {
                a[j-1]=a[j]; //overwrite the value.
            }
            i--; //it used bcz if key value are in two position near by near.
            index--; // as value deleted index also decreased.

        }

    }
    //printing array after removing the number from it.
    printf("Array after deletion: \n");
    for ( i = 0; i <=index; i++)
    {
        printf("Arrays:%d\n",a[i]); //print arrays.
    }

    return 0;

}
