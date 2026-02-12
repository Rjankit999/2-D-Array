/*Homework : Write a program to print the row
number having the maximum sum in a given
matrix.*/
#include <stdio.h>
int main()
{
    // First Matrix..........
    int sumR1 = 0, sumR2 = 0, sumR3 = 0;
    int matrix[3][3] = {
        {1, 10, 3},
        {1, 2, 8},
        {1, 2, 5}};
    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        { // R1 of sum
            for (int j = 0; j < 3; j++)
            {
                sumR1 = sumR1 + matrix[i][j];
            }
        }
        if (i == 1)
        { // R2 of sum
            for (int j = 0; j < 3; j++)
            {
                sumR2 = sumR2 + matrix[i][j];
            }
        }
        if (i == 2)
        { // R3 of sum
            for (int j = 0; j < 3; j++)
            {
                sumR3 = sumR3 + matrix[i][j];
            }
        }
    }
    if (sumR1 > sumR2 || sumR1 > sumR3)
    {
        printf("Sum of R1 Row:  %d", sumR1);
    }
    else if (sumR2 > sumR1 || sumR2 > sumR3)
    {
        printf("Sum of R2 Row:  %d", sumR2);
    }
    else
        printf("Sum of R3 Row:  %d", sumR3);
}