#include<stdio.h>
int main(){
printf("Enter size ");
int n;
scanf("%d",&n);
int arr[n];
printf("Enter array values");

for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}

//new array
/*
int new[n];
for(int j=0;j<n;j++){
new[j]=arr[j];

}
//print new
for(int k=0;k<n;k++){
printf("%d",new[k]);
}
*/


//reverse
/*
for(int l=n-1;l>=0;l--){
printf("%d",arr[l]);
}
*/



//count positive negative zero odd even number
/*
int pos=0,neg=0,zero=0,odd=0,even=0;
for(int j=0;j<n;j++){

//pos
if(arr[j]>0){
pos++;
}

//negative
if(arr[j]<0){
neg++;
}

//zero
if(arr[j]==0){
zero++;
}

//odd
if(arr[j]%2!=0){
odd++;
}

//even
if(arr[j]%2==0){
even++;
}
}
printf("posotive is %d\n",pos);
printf("negative is %d\n",neg);
printf("zero is %d\n",zero);
printf("odd is %d\n",odd);
printf("even is %d\n",even);
*/


//equilibrium of array
/*
int leftsum=0,rightsum=0;
for(int j=1;j<n;j++){

//leftsum
for(int k=0;k<j;k++){
leftsum=leftsum+arr[k];
}

//rightsum
for(int l=j+1;l<n;l++){
rightsum=rightsum+arr[l];
}

if(leftsum==rightsum){
printf("equillibrium at %d",j);
}

leftsum=0;
rightsum=0;
}
*/

/*
int temp=arr[n-1];
for(int j=n-1;j>0;j--){
arr[j]=arr[j-1];
}

arr[0]=temp;
for(int k=0;k<n;k++){
printf("%d ",arr[k]);
}
*/


//check two arrays are equal or not

//create 2nd array
/*
int arr2[n];
printf("enter second array values");
for(int j=0;j<n;j++){
scanf("%d",&arr2[j]);
}


int flag=0,m;
m=n;
//comparing array values
while(m--){
for(int k=0;k<n;k++){
if(arr[m]==arr2[k]){
flag++;
}
}


}
//printf("flag %d ",flag);
if(flag==n){
printf("array is same");
}else{
printf("array is not same");
}
*/


//frequency of each element
int max=0;
for(int j=0;j<n;j++){
if(arr[j]>max){
max=arr[j];
}
}

max=max+1;
//printf("%d",max);
int freq[max];

for(int k=0;k<max;k++){
freq[k]=0;
}

for(int l=0;l<n;l++){
freq[arr[l]]++;
}

for(int p=0;p<max;p++){
if(freq[p]>0){
printf("%d freq is %d\n",p,freq[p]);
}
}


}
