#include<stdio.h>
#include<string.h>

int main(){
char a[100]="m the ravi sir is the great person"; //2
char b[]="the";

//printf("%s",b);
int i=0;
while(a[i]!='\0'){
if((a[i]=='t' && a[i+1]=='h' && a[i+2]=='e') && a[i-1]==' '){
i=i+3;

}
else{
printf("%c",a[i]);
}
i++;
}
}
