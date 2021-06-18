#include<stdio.h>
int MiniMax(int a[],int n)
{
    int min, max, i, newarr[2];
    min = max = a[0];

    for(i = 1; i < n; i++)
    {
        if(min > a[i])
        {
            min = a[i];
        }
        if(max < a[i])
        {
            max = a[i];
        }
    }
    newarr[0] = min;
    newarr[1] = max;

    printf("Here is the Minimum and Maximum value from Array: ");
    for(i = 0; i < 2; i++)
    {
        printf("%d ", newarr[i]);
    }
}
int main()
{
    int a[1000], i, n, sum;

    printf("Enter size of the array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");

    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    MiniMax(a,n);
}
