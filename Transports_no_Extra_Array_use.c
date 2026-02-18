#include <stdio.h>
int main()
{
    int arr[3][3] = {{1, 2, 3}, {10, 5, 1}, {7, 8, 9}};
    printf("Real Matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++)
        {
            int tamp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = tamp;
        }
        
    }
    printf("Transpose Matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
}