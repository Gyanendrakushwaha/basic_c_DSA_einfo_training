#include<stdio.h>

int isAlpha(char c){
if(c>='A'&& c<='Z' || c>='a' && c<='z'){
return 1;
}else{
return 0;
}
}

int main(){

char *s="ab@@@123AB";

while(*s != '\0'){
if(isAlpha(*s)){
printf("%c",*s);
}
s++;

}

}
