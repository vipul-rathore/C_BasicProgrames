#include<stdio.h>

int main(){
    int n;
    printf("enter the number :\n");
    scanf("%d",&n);
    if (n==1)
    {
        printf("Prime Number");
    }
    

    for (int i = 2; i < n; i++)
    {
         if(n % i == 0)
         {
             printf("Not Prime Number");
             break;
         }   
         else
         {
             printf("Prime Number");
             break;
         }   
    }
    
    return 0;
}