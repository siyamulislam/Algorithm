#include<stdio.h>
int main()
{
    int i, n, l,m,r, s, A[10]= {1,2,3,4,5,6,7};

    printf("Enter ur Arry Length\n");
    scanf("%d",&n);
    printf("\nEnter ur %d Arry Elements\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }

    printf("\nEnter ur Arry Search value\n");
    scanf("%d",&s);
    l=0, r=n-1, m=(l+r)/2;

    if(A[m]==s)
    {
        printf("\nFound\n");
    }
    else if(s<A[m])
    {
        l=0;
        r=m-1;
        m=(l+r)/2;
        return ;
    }
    else if(s>A[m])
    {
        l=m+1;
        r=n-1;
        m=(l+r)/2;
        return ;
    }


}
