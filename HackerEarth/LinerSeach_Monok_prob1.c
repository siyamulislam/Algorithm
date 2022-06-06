#include<stdio.h>
int main()
{
    int k,n;
    scanf("%d",&n);
    for(k=0; k<n; k++)
    {
        int i=0, count=0;
        char Tree[100000];
        scanf("%s",Tree);
        while(Tree[i]!='\0')
        {
            if(Tree[i]=='A'||Tree[i]=='E'|| Tree[i]=='I'|| Tree[i]=='O'||Tree[i]=='U'
                    ||Tree[i]=='a'||Tree[i]=='e'||Tree[i]=='i'||Tree[i]=='o'|| Tree[i]=='u')
            {
                count++;
            }
            i++;
        }
        printf("%d\n",count);
    }
}
