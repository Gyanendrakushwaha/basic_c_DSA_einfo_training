//check
#include<stdio.h>
void main(){

FILE *fp1,*fp2;  //file type pointer
char ch1;	//ch is used to store single character
char ch2;

fp1=fopen("txt.txt","r");
fp2=fopen("txt.txt","r");
int flag=1;
do{
ch1=getc(fp1);
ch2=getc(fp2);
if(ch1!=ch2){
flag=0;
break;
}
}while(ch1!=EOF);
fclose(fp1);
if(flag==1){

printf("file is same");
}







}
