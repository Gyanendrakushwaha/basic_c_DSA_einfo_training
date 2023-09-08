///////////////////////////////////         C Program to Find Consecutive Occurrence of Vowel in a String/////////////////////////
#include<string.h>
#include<stdio.h>
int main(){

char s[100]={"my name is gyanenndra kushwaaha"};
int i=0;
while(s[i]!='\0'){
		
if(s[i]==s[i+1]){
printf("%c",s[i]);
printf("%c\n",s[i+1]);
}

i++;
}










}
