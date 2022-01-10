//linear seach with function.
//WANR-with argument no return

#include <stdio.h>
//declaring prototype after header file include.
void search(int[],int,int);//1:store array,2:size,3:key.

int main()
{
    int store[100],key,i,size;
    printf("Enter Size of array: ");
    scanf("%d",&size);
    printf("Enter number to store in array: \n");
    for(i=0;i<size;i++)
    {
        printf("\n--> ");
        scanf("%d",&store[i]);
    }
    printf("Search Key: ");
    scanf("%d",&key);
    search(store,size,key); //calling function.
    return 0;
    
}

//function.
void search(int store[],int size,int key)
{
    int counter=0,i,position;
    for(i=0;i<size;i++)
    {
        if(key==store[i])
        counter++;
        position=i+1;//as index start from 0.
    }
    
    if(counter>0)
    printf("Result: Found in %d place(s).\nPosition: %d of %d (size).",counter,position,size);
    else
    printf("Result: Not found in array.");
}
