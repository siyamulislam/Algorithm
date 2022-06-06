#include<stdio.h>
int main(){
int i,j,t,suvo=0,jit=0;;

char Name[150];
scanf("%s",Name);

for(i=0;Name[i]!='\0';i++){

    if(Name[i]=='S' || Name[i+1]=='U' || Name[i+2]=='V'|| Name[i+3]=='O'){
        suvo++;
    }
    if(Name[i+4]=='J'|| Name[i+5]=='I'|| Name[i+6]=='T'){
        jit++;
        suvo--;
    }


}
printf("SUVO = %d SUVOJIT = %d\n",suvo ,jit);
}
