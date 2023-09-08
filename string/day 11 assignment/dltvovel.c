//////////////////////////////////////delete all vovels from a given string///////////////

#include<stdio.h>
#include<string.h>
int main(){
char s[100]="this is gyanendra kushwaha from acro.";
int len=strlen(s);
//printf("%d",len);

for(int i=0;i<len;i++){
if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U' ){
continue;
}else{
printf("%c",s[i]);
}
}
}
