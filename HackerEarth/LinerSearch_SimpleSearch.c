#include<stdio.h>
int main()
{
    int i,n,k,c,Arr[10000];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&Arr[i]);
    }
    scanf("%d",&k);
    for(i=0; i<n; i++)
    {
        if(Arr[i]==k)
        {
            c=i;
        }
    }
    printf("%d\n",c);
}
