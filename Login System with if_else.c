#include<stdio.h>
#include<conio.h>

void main(){
    
    int password;
    
    printf("SECURE LOGIN SYSTEM...ACTIVATED!! \n");
    printf("ENTER YOUR PASSWORD: ");
    scanf("%d",&password);
    
    if(password==244688){
        
        printf("The password is Correct!");
    }else{
        
        printf("Your password is wrong!");
    }
    
    
    
}
