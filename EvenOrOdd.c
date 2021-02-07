#include<stdio.h>

int main(){
    int number;
    printf("enter the number :\n");
    scanf("%d",&number);

    
    if (number == 0 )
    {
        printf("Zero");
        
    }
    else if (number%2==0)
    {
        printf("Even Number");
    }
    else   
    {
        printf("Odd Number ");
    } 
    
     return 0;
}