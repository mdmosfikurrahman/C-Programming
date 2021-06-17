#include<stdio.h>
int main()
{
    int n=3;
    int i=0;
    char ch[n];
    printf("Test case = 3 \n");
    for(i=0; i<n; i++)
    {
        scanf(" %c", &ch[i]);
    }
    printf("\n\n");
    for(i=0; i<n; i++)
    {
        if((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z'))
        {
            if(ch[i] == 'a' || ch[i] == 'A' || ch[i] == 'e' || ch[i] == 'E' || ch[i] == 'i' || ch[i] == 'I' || ch[i] == 'o' || ch[i] == 'O' || ch[i] == 'u' || ch[i] == 'U')
            {
                printf("%c is an Alphabet : It is a Vowel.\n", ch[i]);
            }
            else
            {
                printf("%c is an Alphabet : It is a Consonant.\n", ch[i]);
            }
        }
        else if(ch[i] >= '0' && ch[i] <= '9')
        {
            printf("%c is Digit.\n", ch[i]);
        }
        else
        {
            printf("%c is Special Character.\n", ch[i]);
        }
    }
    return 0;
}
