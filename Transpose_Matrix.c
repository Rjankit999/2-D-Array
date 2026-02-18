/*Ques : Write a program to Print the transpose of
the matrix entered by the user.*/
#include<stdio.h>
int main(){
    int arr[3][3]={ {1,2},{4,5},{7,8}};
    for (int i = 0; i < 3; i++)
    {
        for(int j=0; j<2; j++){
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose Matrix\n");
    for (int i = 0; i < 2; i++)
    {
        for(int j=0; j<3; j++){
            printf("%4d", arr[j][i]);
        }
        printf("\n");
    }
    
}