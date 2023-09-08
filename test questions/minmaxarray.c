#include<stdio.h>
int main(){

int n;
printf("enter the size of array");
scanf("%d",&n);



int arr[n];
int minarr[n];
int sumarr[n];
for(int p=0;p<n;p++){
scanf("%d",&arr[p]);
}



int sum=0,count=0;
for(int i=n-1;i>=0;i--){

for(int j=i-1;j>=0;j--){
if(arr[i]>arr[j]){
count++;
}
sum=sum+arr[j];

}
minarr[i]=count;
sumarr[i]=sum;

sum=0;
count=0;
}


printf("\nmin\n");
for(int k=0;k<n;k++){
printf("%d ",minarr[k]);
}

printf("\nsum\n");
for(int m=0;m<n;m++){
printf("%d ",sumarr[m]);
}

}

