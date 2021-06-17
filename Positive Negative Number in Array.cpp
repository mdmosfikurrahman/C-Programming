#include<stdio.h>
int main()
{
    int a, b, i, g = 0, h = 0;
    printf("How many Numbers you want to insert?\n");
    scanf("%d", &a);

    int c[a], e[a], f[a];
    printf("Enter %d array elements.\n", a);

    for(i = 0; i < a; i++)
    {
        scanf("%d", &c[i]);
        if(c[i] >= 0)
        {
            e[g] = c[i];
            g++;
        }
        else
        {
            f[h] = c[i];
            h++;
        }
    }
    printf("\nPositive Numbers: \n");
    for(i = 0; i < g; i++)
    {
        printf("%d\n", e[i]);
    }
    printf("\nNegative Numbers: \n");
    for(i = 0; i < h; i++)
    {
        printf("%d\n", f[i]);
    }
    return 0;
}
