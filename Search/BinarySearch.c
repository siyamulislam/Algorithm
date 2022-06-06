#include<stdio.h>
int main()
{
    int List[6]= {98,102,105,216,303,305};
    printf("List[6]={98,102,105,216,303,305}\n\n");
    int i,j,left,right,mid,item,flag=0;
    printf("Enter ur Search Item: ");
    scanf("%d",&item);
    left=0;
    right=5,mid=(left+right)/2;
    for(i=0; i<=5; i++)
    {
        if(List[i]==item)
        {
            flag=1;
        }
        else if(List[i]<=item)
        {
            right=mid-1;
        }
        else if(List[i]>=item)
        {
            left=mid+1;
        }
    }
    if(flag==1)
        printf("Item Found!!\n");
    else
        printf("Item Not Found!!\n");
}
