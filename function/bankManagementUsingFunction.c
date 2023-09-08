#include<stdio.h>


void search(int a[][],int accno){

for(int i=0;i<5;i++){
if(a[i][0]==accno){
printf("balance is %d",a[i][1]);
}
if(i==5){
printf("acc is not valid");
}
}

}
