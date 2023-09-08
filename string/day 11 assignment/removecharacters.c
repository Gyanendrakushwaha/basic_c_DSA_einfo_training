/////////////////////////////////////////////////////////// remove characters from srtring if character is not a alphabet ////////////////////////////////////////////////
#include<stdio.h>
#include<string.h>

int main(){
char a[100]="a1b7knW4eAE";
char b[100];
int i=0,j=0;
while(a[i] != '\0'){
char c=a[i];
if((c >= 'a' && c<='z') || (c >= 'A' && c<='Z')){
b[j]=a[i];
j++;
} 
i++;
}
int temp=0;
while(b[temp]!='\0'){
printf("%c",b[temp]);
temp++;
}
return 0;
}










