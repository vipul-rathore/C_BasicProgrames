#include<stdio.h>
#include<math.h>

int main()
{
    int n, len = 0,sum=0,lastDigit,a;
    printf("enter the number :\n");
    scanf("%d", &n);
    int n_copy = n;
    while (n_copy != 0)
    {
        n_copy = n_copy / 10;
        len++;
    }
    printf("%d\n",len);
    for (int i = 0; i < len; i++)
    {
        lastDigit = n % 10;
        sum = sum + pow(lastDigit,len);
        n= n/10;
    }
    printf("%d",sum);
    return 0;
}
