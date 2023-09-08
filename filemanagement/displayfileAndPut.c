#include<stdio.h>
void main(){

FILE *fp;   //file type pointer
char ch;	//ch is used to store single character

//get file
/*
fp=fopen("txt.txt","r");
do{
ch=getc(fp);
printf("%c",ch);
}while(ch!=EOF);
fclose(fp);
*/




//put file
fp=fopen("txt.txt","w");
putc('h',fp);


fclose(fp);








}
