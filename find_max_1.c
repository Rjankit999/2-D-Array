/*Ques : Given a matrix having 0-1 only, find the
row with the maximum number of 1's.*/
#include <stdio.h>
int main()
{
    int R1 = 0, R2 = 0, R3 = 0, R4 = 0;
    // First Matrix..........
    
    int matrix[4][4] = {
        {0, 0, 0, 1},
        {1, 1, 1, 1},
        {1, 0, 0, 0},
        {0, 0, 0, 1}};
    for (int i = 0; i < 4; i++)
    {
        if (i == 0)
        { // R1 of
            for (int j = 0; j < 4; j++)
            {
                if (matrix[i][j]==1)
                {
                    R1++;
                }
                
                
            }
        }
        if (i == 1)
        { // R2 of
            for (int j = 0; j < 4; j++)
            {
                 if (matrix[i][j]==1)
                {
                    R2++;
                }
            }
        }
        if (i == 2)
        { // R3 of
            for (int j = 0; j < 4; j++)
            {
                 if (matrix[i][j]==1)
                {
                    R3++;
                }
            }
        }
        if (i == 3)
        { // R4 of
            for (int j = 0; j < 4; j++)
            {
                if (matrix[i][j]==1)
                {
                    R4++;
                }
            }
        }
    }
    if (R1 > R2 || R1 > R3 || R1 > R4)
    {
        printf(" Maximum 1 is R1:  %d", R1);
    }
    else if (R2 > R1 || R2 > R3 || R2 > R4)
    {
        printf(" Maximum 1 is R1:  %d", R1);
    }
    else if (R3 > R2 || R3 > R1 || R3 > R4)
    {
        printf(" Maximum 1 is R1:  %d", R1);
    }
    else
        printf(" Maximum 1 is R1:  %d", R1);
}