#include<stdio.h>
int main(){

//for(int i=0;i<=100;i++){
//printf("%d",i);
//}

//for(int i=100;i>=1;i--){
//printf("%d",i);
//}


//int n;
//scanf("%d",&n);
//for(int i=1;i<=n;i++){
//printf("%d",i*i);
//}

//int n;
//scanf("%d",&n);
//for(int i=1;i<=n;i++){
//if(i%5 ==0){
//printf("%d",i);
//}
//}

//int n;
//scanf("%d",&n);
//for(int i=1;i<=n;i++){
//if(i%5 ==0 && i%3==0){
//printf("%d",i);
//}
//}


//int n;
//scanf("%d",&n);
//if(n%2==0){
//for(int i=1;i<=10;i++){
//printf("%d ",n=n+2);
//}
//printf("\n");
//for(int i=1;i<=10;i++){
//printf("%d ",n+1);
//}
//}


int n;
scanf("%d",&n);
int zero=0,positive=0,odd=0,even=0,negative=0;
for(int j=1;j<=n;j++){
int i;
scanf("%d",&i);


//zero
if(i==0){
zero++;
//printf("%d is zero\n",i);
}

//positive
if(i>0){
positive++;
//printf("%d is positive\n",i);
}

//negative
if(i<0){
negative++;
//printf("%d is negative\n",i);
}

//odd
if(i%2!=0){
odd++;
//printf("%d is odd\n",i);
}

//even
if(i%2==0){even++;
//printf("%d is even\n",i);
}



}
printf("zero =%d odd=%d even=%d positive=%d negative=%d \n",zero,odd,even,positive,negative);
}
