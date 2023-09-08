#include<stdio.h>
int main(){



///////sum of digits 
//int n,sum=0,rem;
//printf("Enter the number");
//scanf("%d",&n);
//while(n>0){
//rem=n%10;
//sum=sum+rem;
//n=n/10;
//}
//printf("%d",sum);




//reverse number program
//int n,rev=0,rem;
//printf("Enter the number");
//scanf("%d",&n);
//while(n>0){
//rem=n%10;
//rev=rev*10+rem;
//n=n/10;
//}
//printf("%d",rev);



//reverse number program
int n,ref,rev=0,rem;
printf("Enter the number");
scanf("%d",&n);
ref=n;
while(n>0){
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
//check plaindrome
if(rev==ref){
printf("%d is palindrome",ref);
}else{
printf("%d is not palindrome",ref);
}





}
