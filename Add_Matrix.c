/*Ques : Write a program to store 10 at every index of
a 2D matrix with 5 rows and 5 columns.*/
#include <stdio.h>
int main()
{
    // First Matrix..........
    int matrix1[5][5]={
        {1,2,3},
        {1,2,3},
        {1,2,3}
    };
    // Second Matrix..........
        int matrix2[5][5]={
        {5,2,3},
        {1,5,1},
        {1,2,5}
    };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%4d", matrix1[i][j]+matrix2[i][j]);
        }
        printf("\n");
    }
}