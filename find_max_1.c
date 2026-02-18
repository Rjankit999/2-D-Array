/*Ques : Given a arr having 0-1 only, find the
row with the maximum number of 1's.*/
#include <stdio.h>
int main()
{

    // First arr..........
    int Maxcount = 0, row;

    int arr[4][4] = {
        {1, 0, 1, 1},
        {1, 1, 1, 1},
        {1, 0, 1, 0},
        {0, 0, 0, 1}};
    for (int i = 0; i < 4; i++)
    {
        int count = 0;
        

        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == 1)
                count++;
                
            if (Maxcount < count){
                Maxcount = count;
                row =i+1;
            }
        }
    }
    printf("Row number: %d Maxunm One: %d",row, Maxcount);
}