#include<stdio.h>

int main()
{
    int y, i;
    float num[1000], sum = 0, avg;

    printf("Enter the numbers of elements: \n");
    scanf("%d", &y);

    while (y > 1000 || y < 1)
    {
        printf("Invalid! number should in range of (1 to 1000).\n");
        printf("Enter the number again: ");
        scanf("%d", &y);
    }
    for (i = 0; i < y; i++)
    {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &num[i]);

        sum += num[i];
    }

    avg = sum / y;

    printf("Average = %.2f", avg);

    return 0;
}
