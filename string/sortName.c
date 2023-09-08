#include<stdio.h>
#include<string.h>


int main(){
int p=0,l=0,a=0;

char s[20];

printf("enter the attendance");
gets(s);



int len=strlen(s);
int index,cons=1;

for(int i=0;i<len;i++){

if(s[i]=='A'){
a++;
}

else if(s[i]=='L'){
if(index==(i-1)){
cons++;
}
l++;
index=i;
}


else if(s[i]=='P'){
p++;
}


}

if(a<=2 && l<=3 && cons<3){
printf("True");
}
else{
printf("false");
}







}
