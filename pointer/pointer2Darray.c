#include<stdio.h>
int main(){

int a[2][2]={{1,2},{4,5}};
int *p;
p=a;
for(int i=0;i<2;i++){
for(int j=0;j<2;j++){

int b=*(*(p+i*3)+j);
printf("%d ",b);
}
}




}
