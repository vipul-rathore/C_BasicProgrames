#include <stdio.h>
int maxValue(int arr[], int length);

int main()
{
    int n, max;
    printf("enter the total number of n:\n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nenter the no arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }
    max = maxValue(arr, n);
    printf("the max value is = %d", max);
    return 0;
}
int maxValue(int arr[], int length)
{
    int max = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}