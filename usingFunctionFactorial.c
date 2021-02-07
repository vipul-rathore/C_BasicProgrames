#include<stdio.h>
long long factorial(int n);

int main(){
    int number;
    printf("enter the number :\n");
    scanf("%d",&number);
    printf("factorial = %ld",factorial(number));
    return 0;
}
long long factorial(int n)
{
    if (n<=1)
        return 1;
    else
    {
        n=n*factorial(n-1);
        return n;
    }
}