#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter a Row: ");
    scanf("%d", &row);
    printf("Enter a Column: ");
    scanf("%d", &col);
    printf("Enter a Value of Mateix: ");
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%4d", &arr[i][j]);
        }
        
    }
    //print a matrix....
      for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
}