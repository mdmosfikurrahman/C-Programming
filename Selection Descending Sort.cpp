#include <stdio.h>
int main ()
{
    int number[30];

    int i, j, a, n;
    printf("Enter the Number of Elements: \n");
    scanf("%d", &n);

    printf("Enter the Elements: \n");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &number[i]);
    }

    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (number[i] < number[j])
            {
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }

    printf("The numbers arranged in descending order are given below: \n");

    for (i = 0; i < n; ++i)
    {
        printf("%d\n", number[i]);
    }

    return 0;
}
