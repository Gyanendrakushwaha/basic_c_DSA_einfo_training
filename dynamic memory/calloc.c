#include<stdio.h>
#include<stdlib.h>

//for single variable

int main(){
int *fp,n;
printf("enter how many numbers");
scanf("%d",&n);
fp=(int *)calloc(n,sizeof(int));
*fp=25;
printf("%d",*fp);
free(fp);
}
