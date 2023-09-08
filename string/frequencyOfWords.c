/////////////////////////////////////////////////////////////frequency/////////////////////////////////
#include<stdio.h>
#include<string.h>
int main(){
    char str[]=" gyanendra my gyanendra name gyanendra is gyanendra";  //11
    char s[]="gyanendra";
    
    int n=0,m=0,count=0;
    int len=strlen(s);
   // printf("%d",len);
    while(str[n]!='\0'){
       
        //printf("%d ",count++);
        if(s[m]==str[n]){
            //printf("%d",n);
           
            while(str[n]==s[m] && str[n]!='\0'){
                n++;
                m++;
            }
             if(m==len){
            //printf("found");
            count++;
        }
        }else{
            
            n++;
        }
       
        
        m=0;
        
    }
    printf("frecuency is %d",count);
    
    
    
}
