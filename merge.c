#include <stdio.h>

void conquer(int arr11[], int arr12[], int arr13[], int len, int len2);
void divide(int arr[], int len)
{
    if (len < 2)
        return;

    int num1 = len / 2;
    int num2 = len - num1;

    int arr1[num1];
    int arr2[num2];

    for (int i = 0; i < num1; i++)
    {
        arr1[i] = arr[i];
    }
    for (int i = 0; i < num1; i++)
    {
        arr2[i] = arr[num1 + i];
    }
    divide(arr1, num1);
    divide(arr2, num2);
    conquer(arr1, arr2, arr, num1, num2);
}

void conquer(int arr11[], int arr12[], int arr13[], int len, int len2)
{
    int i, j, k;
    for (i = 0, j = 0, k = 0; i < len && j < len2;)
    {
        if (arr11[i] < arr12[j])
        {
            arr13[k++] = arr11[i++];
        }
        else
        {
            arr13[k++] = arr12[j++];
        }
    }

    while (i < len)
        arr13[k++] = arr11[i++];
    while (i < len2)
        arr13[k++] = arr12[i++];
}

int main()
{
    int n;
    printf("Enter a length for array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter a array Elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    divide(arr, n);
    printf("Sorted array Elements : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
