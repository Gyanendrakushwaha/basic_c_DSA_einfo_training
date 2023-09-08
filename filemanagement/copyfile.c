//incomplet

#include<stdio.h>
void main(){
FILE *fp1,*fp2; 
char ch;

fp1=fopen("txt.txt","r");
fp2=fopen("pxt.txt","w");

while(1){
ch=getc(fp1);
if(ch==EOF){
break;
}
printf("%c",ch);
}




}
