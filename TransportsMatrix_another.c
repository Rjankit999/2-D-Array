/*Ques : Write a program to Print the transpose of
the matrix entered by the user.*/
#include <stdio.h>
int main()
{
    printf("Enter a size Row: ");
    int row;
    scanf("%d", &row);
    printf("Enter a size Column: ");
    int clo;
    scanf("%d", &clo);
    int arr[row][clo];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < clo; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Transpose Matrix\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < clo; j++)
        {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
    // New Array..................
    int brr[clo][row];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < clo; j++)
        {
            brr[i][j] = arr[j][i];
        }
    }
    printf("Transports Array\n ");
    for (int i = 0; i < clo; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%4d", arr[j][i]);
        }
        printf("\n");
    }
}