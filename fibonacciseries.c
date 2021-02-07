#include <stdio.h>

int main()
{
    int n, n1 = 0, n2 = 1, n3;
    printf("enter the total number of n: ");
    scanf("%d", &n);
    printf("%d %d",n1,n2);
    for (int i = 1; i <= n; i++)
    {
        n3 = n2 + n1;
        n1 = n2;
        n2 = n3;
        printf(" %d", n3);
    }

    return 0;
}