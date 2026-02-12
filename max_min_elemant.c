// Find of max and Min Elemant.....
#include <stdio.h>
int main()
{
    // First Matrix..........
    int sum = 0,mxi,mxj,mi,mj;
    int arr[3][3] = {
        {1, 2, 3},
        {5, 45, 5},
        {0, 2, 10}};
    int max = arr[0][0];
    int min = arr[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                mxi=i;
                mxj=j;
            }
            else if (arr[i][j] < min)
            {
                 min = arr[i][j];
                 mi =i;
                 mj=j;
            }
            
        }
    }
    printf("Maxmum of Matrix:  %d Indix (%d %d)\n", max,mxi,mxj);
    printf("Minum of Matrix:  %d Indix (%d %d)", min,mi,mj);
}