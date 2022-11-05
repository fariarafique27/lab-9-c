#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void transpose(int arr[10][10], int m, int n)     //Function Definition
{
    /*for (int i = 0;i < m;i++)     //Transpose Matrix initialization
    {
        for (int j = 0;j < n;j++)
        {
            arr[j][i] = arr[i][j];     //Store elements in the transpose matrix
        }
    }*/
     int temp = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j >= i)
            {
                temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
    }
    printf("\nAfter transpose the elements are...\n");
    for (int j = 0;j < m;j++)      //Print the transpose matrix
    {
        for (int i = 0;i < n;i++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
}
int main()
{
    int m, n;                 //Matrix Size Declaration
    printf("Enter the number of rows and column: \n");
    scanf("%d %d", &m, &n);   //Matrix Size Initialization
    int arr[10][10];        //Matrix Size Declaration
    printf("\nEnter the elements of the matrix: \n");
    for (int i = 0;i < m;i++)    //Matrix Initialization
    {
        for (int j = 0;j < n;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nThe elements in the matrix are: \n");
    for (int i = 0;i < m;i++)     //Print the matrix
    {
        for (int j = 0;j < n;j++)
        {
          printf("%d ", arr[i][j]);
      }
        printf("\n");
    }
   
   // int arr[10][10];         //Transpose Matrix Declaration
    transpose(arr, m, n);  //Function Call
    return 0;
}
