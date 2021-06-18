#include<stdio.h>
int main()
{
    int x, y, i;

    printf("Size of Array 1: N1 = ");
    scanf("%d", &x);

    int arr1[x];

    printf("\nEnter %d array elements:\n", x);

    for(i = 0; i < x; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("\nSize of Array 2: N2 = ");
    scanf("%d", &y);

    int arr2[x + y];

    printf("\nEnter %d array elements:\n", y);

    for(i = x; i < x + y; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for(i = 0; i < x; i++)
    {
        arr2[i] = arr1[i];
    }

    printf("\nMerged Array:\n");

    for(i = 0; i < x + y; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}
