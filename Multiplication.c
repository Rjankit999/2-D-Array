#include <stdio.h>
int main()
{
    int arr1[3][3] = {
        {1, 2, 3}, 
        {2, 1, 3}, 
        {5, 2, 3}};

    int arr2[3][3] = {
        {4, 2, 0},
        {2, 0, 3},
        {3, 2, 3}};
    int ans[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           ans[i][j]=(arr1[i][j])*(arr2[j][i]);
        }

    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%4d", ans[i][j]);
        }
        printf("\n");
    }
}