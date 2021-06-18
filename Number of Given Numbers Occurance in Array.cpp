#include<stdio.h>

int main()
{
    int i, j, k=0, Size, arr[100];

    printf("Enter the size of Array: ");
    scanf("%d", &Size);

    printf("Enter the Elements: ");
    for(i = 0; i < Size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("You have to search: ");
    scanf("%d", &j);
    for(i = 0; i < Size; i++)
    {
        if(arr[i] == j)
        {
            k++;
        }
    }

    printf("%d is found %d times in your list\n", j, k);

    return 0;
}
