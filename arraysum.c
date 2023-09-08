#include<stdio.h>
int main(){


int m[5],sum=0,min,max,average;
printf("enter the araay values");
for(int i=0;i<5;i++){
scanf("%d",&m[i]);
}
min=max=m[0];


for(int j=0;j<5;j++){

//sum
sum=sum+m[j];

//min
if(m[j]<min){
min=m[j];
}

//max
if(m[j]>max){
max=m[j];
}

}
average=sum/5;
printf("sum is %d \n",sum);
printf("minimum is %d \n",min);
printf("max is %d \n",max);
printf("average is %d \n",sum/5);
}
