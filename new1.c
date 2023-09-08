#include<stdio.h>
void main(){



int n=1,bill=0;
while(n>0){

//printf("hellow");
printf("enter the item no \n101 for burger,\n102 for vadapav,\n103 for sandwitch\n,104 for pizza");
int item;
scanf("%d",&item);

int quant;
printf("enterthe quantity");
scanf("%d",&quant);


if(item==101){
bill=bill+quant*150;
}

if(item==102){
bill=bill+quant*30;
}

if(item==103){
bill=bill+quant*100;
}


if(item==104){
bill=bill+quant*200;
}

printf("do you want to continue");
scanf("%d",&n);
}
printf("total bill is %d",bill);









}
