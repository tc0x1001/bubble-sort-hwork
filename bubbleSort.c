#include <stdio.h>
int main()
{
    int arr[8];
    printf("Please input 8 numbers:");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 7; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int m = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = m;
            }
        }
    }
    printf(" After sorting: ");
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }
}