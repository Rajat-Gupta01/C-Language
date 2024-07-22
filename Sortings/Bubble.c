#include <stdio.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Bubble(int A[], int n)
{
    int i, j, flag=0;
    for (i = 0; i < n - 1; i++) // for passes
    {
        flag = 0;
        for (j = 0; j < n - i - 1; j++) // for comparisions
        {
            if (A[j] > A[j + 1]) // if first element is greater than 2nd one
            {
                swap(&A[j], &A[j + 1]);
                flag = 1;
            }
        }
        if (flag==0){
            break;
        }
    }
}

int main()
{
    int A[] = {3, 7, 9, 8, 6, 7, 5, 43, 0};
    int n = 11;
    Bubble(A, n);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}