#include<stdio.h>
int main(){
int i,y;
int box1Row1[2]={1,2};
int box1Row2[2]={3,4};

int box2Row1[2]={4,3};
int box2Row2[2]={2,1};

int box3Row1[2];
int box3Row2[2];

for (i=0;i<2;i++){
    box3Row1[i]=box1Row1[i]+box2Row1[i];
    box3Row2[i]=box1Row2[i]+box2Row2[i];
}

for (i=0;i<2;i++){
        if(i==1)
        printf("\n");
    printf("%d\t",box3Row1[i]);
    printf("%d\t",box3Row2[i]);


}


return 0;
}
