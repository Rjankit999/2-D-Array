/*HW : Given a matrix 'a' of dimension n x m and 2
coordinates (R1, C1) and (12, C2). Return the sum of
the rectangle from (11,C1) to (12, C2).*/
#include <stdio.h>
int main()
{
    int R1, C1, R2, C2;
    printf("Enter a R1: ");
    scanf("%d", &R1);
    printf("Enter a C1: ");
    scanf("%d", &C1);
    printf("Enter a R2: ");
    scanf("%d", &R2);
    printf("Enter a C2: ");
    scanf("%d", &C2);
    int sum = 0;
    int matrix[5][5] = {
        {1, 2, 3, 2, 3},
        {1, 2, 8, 2, 3},
        {1, 2, 3, 2, 3},
        {1, 2, 3, 4, 3},
        {1, 2, 3, 5, 3},
    };

    for (int i = R1; i <= R2; i++)
    {
        for (int j = C1; j <= C2; j++)
        {
            sum = sum + matrix[i][j];
            printf(" %d", matrix[i][j]);
        }
        printf("\n");
    }
    printf("Sum of Matrix:  %d", sum);
}