//Write a program to sort a set of names stored in an array in alphabetical order.

#include<stdio.h>
#include<string.h>
int main(){
char a[10][20]={"lavina","ayush","gyan","hitakshi","adil"};
char s[20];
int i=0,j=0,count=0;

while(a[i][0]!='\0'){
j=i+1;
while(a[j][0]!='\0'){
if(strcmp(a[i],a[j])>0){
strcpy(s,a[i]);
strcpy(a[i],a[j]);
strcpy(a[j],s);
}
j++;
}
i++;
}

i=0;
while(a[i][0]!='\0'){
printf("%s",a[i]);
i++;
}
}

/////////////////another approach    - string length find karke , for loop se bhi hojayega.
