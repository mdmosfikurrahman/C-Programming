#include<stdio.h>

int main()
{
    int y, i;

    printf("Input a Number: ");
    scanf("%d", &y);

    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", y, i, y*i);
    }

    return 0;
}
