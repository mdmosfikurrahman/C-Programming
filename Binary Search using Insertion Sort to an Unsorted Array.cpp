#include<stdio.h>

void insertion(int arr[], int n)
{
    int i, j, tmp;

    for(i = 0; i < n; i++)
    {
        for(j = i - 1; j >= 0; j--)
        {
            if(arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
            else
            {
                break;
            }
        }
    }
}

void binarysearch(int fn_arr[], int element, int n)
{
    int f = 0, r = n, mid;

    while (f <= r)
    {
        mid = (f + r) / 2;

        if (fn_arr[mid] == element)
        {
            printf("\nElement: %d\nStatus: Found\nPosition: %d.\n", element, mid+1);
            break;
        }
        else if (fn_arr[mid] < element)
        {
            f = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    if (f > r)
    {
        printf("\nElement: %d\nStatus: Not Found\n", element);
    }
}

int main()
{
    int arr[30], i, n, element;

    printf("Enter Number of elements: \n");
    scanf("%d", &n);
    printf("\nEnter the Elements: \n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    insertion(arr, n);

    printf("\nSorted Elements using Insertion Sort:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\nEnter Element to Search: ");
    scanf("%d", &element);

    binarysearch(arr, element, n);

    return 0;
}

