//////////////////////////////////////check given string is palindrome or not ///////////////

#include<stdio.h>
#include<string.h>
int main(){
char s[100]="abcbla";
int len=strlen(s);
//printf("%d",len);
int flag=1;
for(int i=0;i<len;i++){
if(s[i]!=s[len-i-1]){
flag=0;
}
}printf(" palindrome is %d",flag);






}
