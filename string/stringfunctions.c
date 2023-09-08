#include<stdio.h>
#include<string.h>


//user defined funtion for string length using pointer
int length(char *s){
int len=0;
while(*s != '\0'){
s++;
len++;
}
return len;
}


//user defined funtion for string length using array



//user defined function for string compare
int compare(char *s1,char *s2){
int flag=1;
while(*s1 != '\0' || *s2 != '\0'){ //for string comparison use while loop         					//and check vlaues till '\0' because after that 				//garbage values will be compared  
if(*s1 != *s2){
flag=0;
}
s1++;
s2++;
}
return flag;
}


void concat(char *s1,char *s2){

int len1=strlen(s1);
int len2=srelen(s2);
int ttl=len1+len2;
char str[ttl];

//// with 2 for loop ///////
for(int i=0;i<len1-1;i++){
str[i]=*s1++;
}
for(int i=len1-1;i<ttl-1;i++){
str[i]=*s2++;
}
for(int i=0;i<ttl;i++){
printf("%s",str);
}


}







void main(){


/////////////////////// string length ///////////////////////////////
//char c1[10];
//printf("Enter the string");
//gets(c1);


//in build function for length of string
//printf("size of string is %d",strlen(c1)); 

//user defined function for length
//printf("%d",length(c1));



////////////////////////  string compare strcmp(s1,s2) ////////////////////////////
/*
 char s1[10],s2[10];
printf("enter string 1");
gets(s1);

printf("enter string 2");
gets(s2);

*/
//inbuild function for string compare
/*       //The return value from strcmp is 0 if the two strings are equal, 	      // less  than <0 if str1 compares less than str2 , and greater than >0 if str1 		//compares greater than str2
printf("%d",strcmp(s1,s2));

if(strcmp(s1,s2)==0){
printf("string are same");
}else{
printf("string are not same");
}
*/

//user defined function for string compare
//printf("%d",compare(s1,s2));


//////////////////////////////  string concat   ///////////////////////////////

char s1[10],s2[10];
printf("enter string 1");
gets(s1);

printf("enter string 2");
gets(s2);


//predefined function for string concat   strcat(s1,s2) 
//strcat(s1,s2);
//printf("concatinated string is %s",s1);


//user defined function for string concatination
concat(s1,s2);


}








