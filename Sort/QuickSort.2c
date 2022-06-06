
#include<stdio.h>
int arr[7]={15,73,37,85,28,56,68};
int low=0, high=6;

int main(){

 partition(arr,low,high);
quick(arr, low, high-1);

 int i;
    for (i=low; i<high; i++)
        printf("%d ", arr[i]);
    printf("\n");

}
int  partition(int arr[], int low, int high){
int pivot=arr[high];
int i= low-1;
int j;
for (j=low;j<high;j++){
    if (arr[j]<=pivot){
        i++;
        swap(&arr[i], &arr[j]);
    }
}
swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
int swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
}
int quick(int arr[], int low, int high)
{
    if (low < high)
    {

        int pivot  = partition(arr, low, high);

        quick(arr, low, pivot - 1);
        quick(arr, pivot + 1, high);
    }
}

