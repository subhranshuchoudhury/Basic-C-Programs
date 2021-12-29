#include<stdio.h>
#include<math.h>

//number printer using goto

int main(){

    int number,counter=0;
    printf("\n enter the number: ");

    scanf("%d",&number);

    check_num: //here

    if(counter<=number)
    {
        printf("%d\n",counter);
        counter++;
        goto check_num; //here
    }

    return 0;
}