#include <stdio.h>
int main()
{
    int a[100], number, i, j, temp;

    printf("Enter the Number of Elements: \n");
    scanf("%d", &number);

    printf("Enter the Elements: \n");
    for(i = 0; i < number; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 1; i <= number - 1; i++)
    {
        for(j = i; j > 0 && a[j - 1] > a[j]; j--)
        {
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
        }
    }

    printf("Insertion Sort Result in ascending order: \n");
    for(i = 0; i < number; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
