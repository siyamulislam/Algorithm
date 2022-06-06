#include<stdio.h>
int main()
{

    int i,j;
    int arr1[5]= {2,3,5,7,8};
    int arr2[5]= {5,9,14,18,19};
    int arrsum[5];

    for (i=0,j=0; i<5; i++,j++)
    {

        arrsum[i]=arr1[i]+arr2[j];

    }
    for(i=0; i<5; i++)
    {
        printf("%d\t",arrsum[i] );
    }
}
