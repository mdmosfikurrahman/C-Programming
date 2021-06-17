#include<stdio.h>
int main ()
{
    int i, a, b;
    char s[100];
    scanf("%s",&s);
    for(i = 0; s[i] != '\0'; i++)
    {
        s[i] = s[i] + 1;
        printf("%c", s[i]);
    }

    return 0;
}
