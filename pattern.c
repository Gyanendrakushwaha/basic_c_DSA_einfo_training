#include<stdio.h>
int  main(){
int n,count=1;




//scanf("%d",&n);
//for(int i=1;i<=n;i++){
//for(int j=1;j<=i;j++){


//T print
//if(i==1 || j==3 ){
//printf("*");
//}else{
//printf(" ");
//}


//E print
//if(i==1 || j==1 || j==3 ||j==5){
//printf("*");
//}else{
//printf(" ");
//}


//z print
//if(i==1 || i==5 ||i+j==6){
//printf("*");
//}else{
//printf(" ");
//}




//z print

//printf("* ");
//}
//printf("\n");
//}



//reverse triangle
/* scanf("%d",&n);
for(int i=n;i>=1;i--){
for(int j=i;j>=1;j--){

printf("* ");

}
printf("\n");
}
*/


//2.  with space trangle
scanf("%d",&n);
for(int i=1;i<=n;i++){
for(int j=n-i;j>=1;j++){

printf("-");

}
//for(int k=i;j;j--){

printf(" ");

}
printf("\n");
}

