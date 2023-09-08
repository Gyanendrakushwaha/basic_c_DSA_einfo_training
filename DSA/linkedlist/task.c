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


struct node* new=malloc(sizeof(struct node));
struct node *temp=start=new;

printf("Enter the first data");
scanf("%d",&new->data);
new->next=NULL;

for(int i=1;i<n;i++){
new=malloc(sizeof(struct node));

printf("Enter thr data");
scanf("%d",&new->data);
new->next=NULL;

temp->next=new;
temp=new;
}	}

void display(){
struct node *ptr=start;

//display data
while(ptr!=NULL){
printf("value = %d \n",ptr->data);
ptr=ptr->next;
}
}
void insert(){
printf("enter index where want to insert");
int node;
scanf("%d",&node);
//new node
struct node *new=malloc(sizeof(struct node));
new->next=NULL;
printf("ensert data");
scanf("%d",&new->data);

struct node *temp=start;
node--;
for(int i=0;i<node-1;i++){
temp=temp->next;
}
new->next=temp->next;
temp->next=new;
}


void  main(){
createlist();

display();


insert();

display();

}
