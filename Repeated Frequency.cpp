#include <stdio.h>

int main()
{
    int arr[100], freq[100], Size, i, j, k, count;

    printf("Enter Size of array: ");
    scanf("%d", &Size);

    printf("Enter elements in array: ");
    for(i = 0; i < Size; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    /* Count The Repeated Values */
    for(i = 0; i < Size; i++)
    {
        count = 1;
        for(j = i + 1; j < Size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    /* Print the repeated Values */
    for(i = 0; i < Size; i++)
    {
        if(freq[i] != 0 && freq[i] > 1)
        {
            printf("%d %d\n", arr[i], freq[i]);
        }
    }

    /* Delete The Repeated Values*/
    for (i = 0; i < Size; i++)
	{
		for(j = i + 1; j < Size;)
		{
    		if(arr[i] == arr[j])
    		{
    			for(k = j; k < Size; k++)
    			{
    				arr[k] = arr[k + 1];
				}
				Size--;
			}
			else
			{
				j++;
			}
		}
	}

    /* Print the remaining values */
	for (i = 0; i < Size; i++)
  	{
 		printf("%d\n", arr[i]);
  	}
    return 0;
}
