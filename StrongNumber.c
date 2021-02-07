#include<stdio.h>
long factorial(int n);
int main(){
    int n,fact,sum=0,lastdigit;
    printf("enter the number : ");
    scanf("%d", &n);

    int n_copy = n;
    while (n_copy != 0)
    {
        lastdigit = n_copy % 10;
        fact=factorial(lastdigit);
        sum=sum+fact;
        n_copy=n_copy/10;
    }
    if (sum==n)
        printf("Storng Number");
    else
        printf("Not Storng Number");
    
    return 0;
}


long factorial(int n)
{
    if (n<=1)
        return 1;
    else
    {
        n=n*factorial(n-1);
        return n;
    }
}