#include <stdio.h>

int main()
{
    int n1, n2,temp;
    printf("enter the n1 number : ");
    scanf("%d", &n1);
    printf("enter the n2 number : ");
    scanf("%d", &n2);
    temp=n1;
    n1=n2;
    n2=temp;
    printf("n1 is: %d\n",n1);
    printf("n2 is: %d\n",n2);
    return 0;
}
