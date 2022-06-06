#include<stdio.h>
int main(){

int i,j,l=4,A[5]={22,9,11,3,8};
for(j=1;j<=l;j++){
    int key=A[j];
    i=j-1;

    while(i>-1 && A[i]>key){
        A[i+1]=A[i];
        i=i-1;
    }
    A[i+1]=key;
}
for(i=0;i<=4;i++){
    printf("%d\t",A[i]);
}

return 0;
}
