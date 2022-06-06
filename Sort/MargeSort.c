
#include<stdio.h>
void MergeSort();
void Merge();
void Display();

int main()
{
    int arr[7] = {38, 27, 43, 3, 9, 82,10};
    int l=0,r=6;
    MergeSort(arr, l, r);
    Display(arr);
    return 0;
}

void MergeSort(int arr[], int l, int r)
{
    int k;
    for (k=0;k<r;k++){
        printf("%d",arr[k]);
    }
    if (l < r)
    {
        int m = l+(r-l)/2;

        MergeSort(arr, l, m);
        MergeSort(arr, m+1, r);
        Merge(arr, l, m, r);
    }
}

void Merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    i = 0,j = 0,k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }


    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void Display(int A[])
{
    printf("GivenArr[7] = {38, 27, 43, 3, 9, 82,10}\n\n");
    int i;
    printf("Sorted Arr: ");
    for (i=0; i < 7; i++)
        printf("%d ", A[i]);
    printf("\n");
}


