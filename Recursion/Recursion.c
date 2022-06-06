#include<stdio.h>

int  rec(int num);
int main(){

 int start;
 scanf("%d",&start);
 rec(start);
 }


int rec(int num){

    printf("%d\t",num);
    if (num>=1000){
    return num;
    }
    return  (rec(num*5));



}
