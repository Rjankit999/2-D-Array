// Write a porgram to print a matrix in wave fom......... 
#include <stdio.h>
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        if (i%2==0)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%4d",arr[j][i]);
            }
        }
        else
        for (int j = 2; j>=0; j--)
            {
                printf("%4d",arr[j][i]);
        }
        printf("\n");
    }
    printf("%d",0%2==0);
    
}