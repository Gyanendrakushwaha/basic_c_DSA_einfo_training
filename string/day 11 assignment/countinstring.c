///////////////////////////////  C Program to Count Number of Words,line,digit,alphabets in a String  //////////////////////////////////////////////////
#include<stdio.h>
#include<string.h>
int main(){

int words=0,line=0,digit=0,alphabets=0;
char a[100]="this is the    number 1 case of 100 peoples ";
printf("%s",a);
int i=0;

while(a[i]!='\0'){

////counting words
if((a[i]==' ') && (a[i-1]!='\0')){
words++;
if((a[i]=='\0') && (a[i-1]!='\0')){
words++;
}
}

//counting line      -- this line counting may nort be correct
if(a[i]=='\n'){
line++;
}

//counting digit
if((a[i]>=48) && (a[i]<=57)){
digit++;
}


//counting alophabets
if(((a[i]>=97) && (a[i]<=122))||(a[i]>=65 && a[i]<= 90)){
alphabets++;
}
i++;
}
printf("%d",alphabets);
return 0;
}

