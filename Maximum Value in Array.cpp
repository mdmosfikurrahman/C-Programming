#include <stdio.h>
int maxValue(int a[], int n)
{
    int c, i = 0;
    for (c = 1; c < n; c++)
    {
        if (a[c] > a[i])
        i = c;
    }
    return i;
}

int main()
{
    int c, arr[100], Size, location, maximum;

    printf("Enter the Size of array: ");
    scanf("%d", &Size);
    printf("Enter %d integers: ", Size);

    for (c = 0; c < Size; c++)
    {
        scanf("%d", &arr[c]);
    }

    location = maxValue(arr, Size);
    maximum  = arr[location];

    printf("Maximum element value : %d.\n", maximum);
    return 0;
}
