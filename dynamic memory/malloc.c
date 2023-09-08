#include<stdio.h>
#include<stdlib.h>

//for single variable
/*
int main(){
int *fp;
fp=(int *)malloc(sizeof(int));
*fp=25;
printf("%d",*fp);
free(fp);
}
*/

//for array 
int main(){

int *list=malloc(3 *sizeof(int));
if(list== NULL){
return 1;
}
list[0]=1;
list[1]=2;
list[2]=3;

int *temp=malloc(4 *sizeof(int));
for(int i=0;i<3;i++){
temp[i]=list[i];
}

//add number to list of size 4.
temp[3]=4;

//free list of size 3.
free(list);

//remember list of size 4.
list =temp;

for(int i=0;i<4;i++){
printf("%d",*list);
list++;
}







}
















