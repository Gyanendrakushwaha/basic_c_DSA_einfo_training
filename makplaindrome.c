#include<stdio.h>
int main(){





//reverse number program
long int n,ref,rev=0,rem,sum=0,digit=0;
printf("Enter the number");
scanf("%ld",&n);
ref=n;

while(n>0){
rem=n%10;
rev=rev*10+rem;
n=n/10;
digit++;
}

//check plaindrome
if(rev==ref){
printf("%ld is palindrome",ref);
}else{

n=sum=ref;
n=n/10;
//printf("%ld",digit);
digit--;

while(digit--){
rem=n%10;
sum=sum*10+rem;
n=n/10;
}


}

printf("%ld",sum);
















}
