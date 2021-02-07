#include<stdio.h>

int main(){
    int number,fact=1;
    printf("enter the number :\n");
    scanf("%d",&number);
    for ( int i = 1; i <= number; i++)
    {
        fact = fact*i;

    }
    printf("factorial = %d",fact);
    return 0;
}