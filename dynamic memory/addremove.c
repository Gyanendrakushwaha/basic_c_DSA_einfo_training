#include<stdio.h>
#include<stdlib.h>

void main(){

int i,n1,n2;
int *p;
printf("enter the size of list");
scanf("%d",&n1);
fp=(int *)malloc(n1 *sizeof(int));

for(i=0;i<n1;i++){
scanf("%d",&fp[i];
}


printf("the number in the list are\n");
for(i=0;i<n1;i++){
printf("%d\n",fp[i]);
}

printf("Enter new size of list");
scanf("%d",&n2);

fp=realloc(fp,n2*sizeof




}
