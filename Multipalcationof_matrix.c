/*Ques : Write a program to print the multiplication
of two matrices given by the user.*/
#include <stdio.h>
int main()
{
    int FR, FC, SR, SC;
    // First Matirx inpot.......
    printf("Enter a First Matrix Row Size: ");
    scanf("%d", &FR);
    printf("Enter a First Matrix Column Size: ");
    scanf("%d", &FC);
    int first[FR][FC];
    printf("Enter a Value \n");
    for (int i = 0; i < FR; i++)
    {
        for (int j = 0; j < FC; j++)
        {
            scanf("%d",&first[i][j]);
        }
    }
    // Second Matirx inpot.......
    printf("Enter a Second Matrix Row Size: ");
    scanf("%d", &SR);
    printf("Enter a Second Matrix Column Size: ");
    scanf("%d", &SC);
    int second[SR][SC];
    for (int i = 0; i < SR; i++)
    {
        for (int j = 0; j < SC; j++)
        {
            scanf("%d", &second[i][j]);
        }
    }
    printf("First Matrix:-\n");
    for (int i = 0; i < FR; i++)
    {
        for (int j = 0; j < FC; j++)
        {
            printf("%4d", first[i][j]);
        }
        printf("\n");
    }
    printf("Second Matrix:-\n");
    for (int i = 0; i < SR; i++)
    {
        for (int j = 0; j < SC; j++)
        {
            printf("%4d", second[i][j]);
        }
        printf("\n");
    }
    // Multiplication fo Matirx.........
    
}