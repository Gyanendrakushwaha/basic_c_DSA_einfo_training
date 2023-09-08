#include<stdio.h>


//return int
int sum1(int a,int b){
int sum;
sum=a+b;
return sum;
}


//void
void sum2(int a,int b){
int sum;
sum=a+b;
printf("%d",sum);
}


//no argument no return type
void sum3(){
printf("enter the values");
int a,b;
scanf("%d %d",&a,&b);
a=a+b;
printf("sum is %d",a);
}


int sum4(){
printf("enter the values");
int a,b;
scanf("%d %d",&a,&b);
a=a+b;
return a;

}

float sum5(float a,float b){
float sum=a+b;
return sum;
}

void square1(int a){
a=a*a;
printf("%d",a);
}

int square2(int a){
a=a*a;
return a;
}
//grades
char grades(){
int marks;
printf("enter the marks");
scanf("%d",&marks);
char c;
if(marks<=100 && marks>80  ){
c='a';
}
else if( marks<=80 && marks>60  ){
c='b';
}
else if( marks<=60  && marks>40){
c='c';
}
else if(marks<=40 && marks>20  ){
c='d';
}
else{
c='f';
}
return c;
}

//single even or not
int iseven(){
int n;
printf("enter the number");
scanf("%d",&n);
if(n%2==0){
return 1;
}else{
return 0;
}
}

//evne odd in range
void alleven(int n){
if(n%2==0){
printf(" %d is even\n",n);
}else{
printf(" %d is odd\n",n);
}
}


//prime in range
void isprime(int n){
int flag=1;
for(int i=2;i<n;i++){
if(n%i==0){
flag=0;
}
}
if(flag==1){
printf("%d is prime\n",n);
}
}

//power 2
int power(){
int n;
printf("enter the number");
scanf("%d",&n);
n=n*n;
return n;
}


int main(){
int a,b;

//argument with return
//printf("enter the numbers");
//scanf("%d %d",&a,&b);
//printf("sum is %d",sum1(a,b));


//argument with no return
//sum2(a,b);


//no argument no return 
//sum3();


//no argument but return int
//printf("%d",sum4());


//float argument with float return
//printf("%f",sum5(1.3,1.2));

//square with no return
//square1(2);


//square with return
//printf("%d",square2(2));

//grades funtion
//printf("%c",grades());

//even odd
//printf("%d",iseven());

//all even or not
/*
int m;
printf("enter no ");
scanf("%d",&m);
for(int i=0;i<=m;i++){
alleven(i);
}
*/


//prime or not
/*
int n;
printf("enter range");
scanf("%d",&n);
for(int i=2;i<=n;i++){
isprime(i);
}
*/


//power
printf("power of 2 of number is %d",power(8));

return 0;
}
