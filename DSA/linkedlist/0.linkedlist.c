#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node *start;

struct node{
int data;
struct node* next;
};

void createlist(){
int n,x;
printf("enter the no of nodes");
scanf("%d",&n);

//creating first node
struct node* new=malloc(sizeof(struct node));
struct node *temp=start=new;

printf("Enter the first data");
scanf("%d",&new->data);
new->next=NULL;

//creating rest nodes
for(int i=1;i<n;i++){
new=malloc(sizeof(struct node));

printf("Enter thr data");
scanf("%d",&new->data);
new->next=NULL;

temp->next=new;
temp=new;
}	}




void  main(){
createlist();
struct node *ptr=start;
int i=0;
while(ptr!=NULL){
printf("node = %d value = %d \n",i+1,ptr->data);
i++;
ptr=ptr->next;
}

}
