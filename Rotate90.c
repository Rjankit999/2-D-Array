/*Ques : Write a program to rotate a matrix 90° clockwise.*/
#include <stdio.h>
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 1}, {7, 8, 9}};
    printf("Real Matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    } // Transport Matrix....
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
    // Rotate Matrix 90
    for (int i = 0; i < 3; i++)
    {
        int j = 0, k = 2;
        while (j < k)
        {
            int tamp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = tamp;
            j++;
            k--;
        }
    }

    printf("Rotate 90 Matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
}