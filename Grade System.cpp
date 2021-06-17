#include<stdio.h>

int main()
{
    float n;
    printf("Enter Mark: ");
    scanf("%f",&n);

    if(n >= 40)
    {
        if(n>=80)
        {
            printf("Grade : A+\n");
            printf("Grade point equivalent : 4.00\n");
            printf("Remarks : Outstanding\n");
        }
        else if(n >= 75)
        {
            printf("Grade : A\n");
            printf("Grade point equivalent : 3.75\n");
            printf("Remarks : Excellent\n");
        }
        else if(n >= 70)
        {
            printf("Grade : A-\n");
            printf("Grade point equivalent : 3.50\n");
            printf("Remarks : Very Good\n");
        }
        else if(n >= 65)
        {
            printf("Grade : B+\n");
            printf("Grade point equivalent : 3.25\n");
            printf("Remarks : Good\n");
        }
        else if(n >= 60)
        {
            printf("Grade : B\n");
            printf("Grade point equivalent : 3.00\n");
            printf("Remarks : Satisfactory\n");
        }
        else if(n >= 55)
        {
            printf("Grade : B-\n");
            printf("Grade point equivalent : 2.75\n");
            printf("Remarks : Above Average\n");
        }
        else if(n >= 50)
        {
            printf("Grade : C\n");
            printf("Grade point equivalent : 2.50\n");
            printf("Remarks : Average\n");
        }
        else if(n >= 45)
        {
            printf("Grade : C+\n");
            printf("Grade point equivalent : 2.25\n");
            printf("Remarks : Below Average\n");
        }
        else
        {
            printf("Grade : D\n");
            printf("Grade point equivalent : 2.00\n");
            printf("Remarks : Pass\n");
        }
    }
    else
    {
        printf("Grade : F\n");
        printf("Grade point equivalent : 0.00\n");
        printf("Remarks : Fail\n");
    }
    return 0;
}
