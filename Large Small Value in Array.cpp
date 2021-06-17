#include<stdio.h>

int main()
{
    int x[100], i, y, large, small;

    printf("Enter the size of Array: \n");
    scanf("%d", &y);
    printf("Input the Numbers : \n");

    for(i = 0; i < y; i++)
        
        scanf("%d", &x[i]);
        large = small = x[0];

        for(i = 1; i < y; i++)
        {
            if(x[i] > large)
            {
                large = x[i];
            }
            if(x[i] < small)
            {
                small = x[i];
            }
        }
		
    printf("The smallest value is %d\n",small);
    printf("The largest value is %d\n",large);
    return 0;
}
