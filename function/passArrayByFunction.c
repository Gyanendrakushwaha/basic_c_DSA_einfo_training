#include<stdio.h>

void ScanArray(int a[],int n){
int i;
for(i=0;i<n;i++){

scanf("%d",&a[i]);
}
}

void PrintArray(int a[],int n){
int i;
for(i=0;i<n;i++){
printf("%d",a[i]);
}
}

int main(){
int a[10];
//int b[5];
//int c[20];
printf("enter number");
ScanArray(a,10);

//ScanArray(b,5);

//ScanArray(c,20);


PrintArray(a,10);

}


