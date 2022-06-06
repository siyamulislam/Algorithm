#include<stdio.h>
int main(){

int i,j,l=4,A[5]={22,9,11,3,8};
for(j=1;j<=l;j++){
    int key;
    i=j-1;
    int x[1111];

    while(A[i]>key){
        key=A[j];
        A[j]=A[i];
       A[i]=key;

    }
}
for(i=0;i<=4;i++){
    printf("%d\t",A[i]);
}

return 0;
}

