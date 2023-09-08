#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node{
struct node *prev;
int data;
struct node *next;
};

struct node *start=NULL;
struct node *last=NULL;
//function for creating new node which returns address of new node
struct node *createnode(){
struct node* new=malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->next=NULL;
new->prev=NULL;

return new;
}

//function for creating doubly linked list
void createlist(){
	//ask for number off nodes 
	int n;
	printf("enter the number of nodes");
	scanf("%d",&n);
	
	//two pointer next and last
	struct node *new;
	
	
	//creating first node 
	new=createnode();
	start=new;
	last=new;
	
	//for other nodes
	for(int i=1;i<n;i++){
	new=createnode();
	last->next=new;
	new->prev=last;
	last=new;
	}
}

//accessing data nodes from front
void display_start(){
	struct node *temp=start;
	while(temp!=NULL){
	printf("%d ->",temp->data);
	temp=temp->next;
	}
}

//accessing data nodes from last
void display_end(){
	struct node *temp=last;
	while(temp!=NULL){
	printf("%d ->",temp->data);
	temp=temp->prev;
	}
}

void main(){
createlist();
display_start();
printf("\n");
display_end();
}
