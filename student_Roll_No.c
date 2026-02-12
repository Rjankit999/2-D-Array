/*Ques : Write a program to store roll number and
marks obtained by 4 students side by side in a matrix.*/
#include <stdio.h>
int main()
{
    int arr[4][2] = {1,85,3,63,5,84,7,90};

    // print a matrix....
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
}