// Find the sum of given matrix of nXm..........
#include <stdio.h>
int main()
{
    // First Matrix..........
    int sum = 0;
    int matrix[3][3] = {
        {1, 2, 3},
        {1, 2, 8},
        {1, 2, 3}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = sum + matrix[i][j];
        }
    }
    printf("Sum of Matrix:  %d", sum);
}