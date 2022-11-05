/* C Program to check Matrix is an Identity Matrix or Not */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int fun(int a[10][10], int i, int j) {
    int rows, columns, flag = 1;
    for (rows = 0; rows < i; rows++)
    {
        for (columns = 0; columns < j; columns++)
        {
            if (a[rows][columns] != 1 && a[columns][rows] != 0)
            {
                flag = 0;
                break;
            }
        }
    }
    return flag;
}
int main()
{
    int i, j, rows, columns, a[10][10], Flag = 1;

    printf("\n Please Enter Number of rows and columns  :  ");
    scanf("%d %d", &i, &j);

    printf("\n Please Enter the Matrix Elements \n");
    for (rows = 0; rows < i; rows++)
    {
        for (columns = 0; columns < j; columns++)
        {
            scanf("%d", &a[rows][columns]);
        }
    }


    if ((a[10][10], i, j))
    {
        printf("\n The Matrix that you entered is an Identity Matrix ");
    }
    else
    {
        printf("\n The Matrix that you entered is Not an Identity Matrix ");
    }

    return 0;
}