#include<stdio.h>
int main()
{
    int i, n, m, A[100];
    printf("Enter ur Arry Length\n");
    scanf("%d",&n);
    printf("\nEnter ur %d Arry Elements\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }

    printf("\nEnter ur Arry Search value\n");
    scanf("%d",&m);
    for(i=0; i<n; i++)
    {
        if(A[i]==m)
        {
            printf("\nFound\n");
            return i;
        }

    }
}
