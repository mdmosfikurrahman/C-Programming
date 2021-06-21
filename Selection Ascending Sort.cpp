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

    i = 0;

    while( i < number)
    {
        j = i + 1;
        while( j < number)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            j++;
        }
        i++;
    }
    printf("The numbers arranged in descending order are given below: \n");
    for(i = 0; i < number; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
