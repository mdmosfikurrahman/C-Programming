#include<stdio.h>

int main()
{
    int a, b, d, j, e = 9, i;

    printf("Test Case : ");
    scanf("%d", &a);

    for(i = 0; i < a; i++)
    {
        scanf("%d", &b);
        for(j = 2; j < b; j++)
        {
            d = b % j;
            if(d == 0)
            {
                e = 0;
                break;
            }
            else
            {
                e = 1;
            }
        }
        if(e == 0 || b == 1)
        {
            printf("%d is not a Prime Number.\n", b);
        }
        else
        {
            printf("%d is a Prime Number.\n", b);
        }
    }
    return 0;
}
