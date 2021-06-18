#include<stdio.h>
float findAvarage(float a[10], int n)
{
    int i;
    float sum = 0.0, average;
    for(i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    average = sum / n;

    return average;
}

int main()
{
    float a[100], res;
    int i, n;

    printf("Enter the Size of Array: ");
    scanf("%d", &n);
    printf("Enter the Elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
    }

    res = findAvarage(a, n);
    printf("Average : %0.2f", res);

    return 0;
}
