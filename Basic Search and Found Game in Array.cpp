#include<stdio.h>
int main()
{
    int a, b, d, j, e, i;

    printf("Test Case: ");
    scanf("%d", &a);
    printf("How many Numbers you want to insert?\n");
    scanf("%d", &b);

    int c[b];

    printf("Enter %d array elements\n", b);

    for(j = 0; j < b; j++)
    {
        scanf("%d", &c[j]);
    }
    for(i = 1; i <= a; i++)
    {
        printf("Case:%d\nEnter Data You want to search\n",i);
        scanf("%d", &d);
        e = 1;

        int left = 0, right = a - 1, mid;

        while(left <= right)
        {
            mid = (left + right) / 2;
            if (c[mid] == d)
            {
                e = 0;
                break;
            }
            else if(c[mid] < d)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        if(e == 0)
        {
            printf("%d is found at Index %d\n", d, mid);
        }
        else
        {
            printf("%d is not found in the Array\n", d);
        }
    }
    return 0;
}
