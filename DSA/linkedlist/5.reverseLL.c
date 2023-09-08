//in this linked list  start is initilized locally ,and start is passed as parameter  

#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
};

struct node* create(struct node *start){
//entering size
int n;
printf("enter the size of ll");
scanf("%d",&n);

//creating first node
struct node *new;
new =malloc(sizeof(struct node));
new->next=NULL;
printf("enter tha first node data");
scanf("%d",&new->data);

struct node *temp;
start=new;
temp=start;

//creating rest of nodes
for(int i=1;i<n;i++){
struct node *new;
new =malloc(sizeof(struct node));
new->next=NULL;
printf("enter tha first node data");
scanf("%d",&new->data);

temp->next=new;
temp=temp->next;
}
return start;
}


struct node *reverse(struct node *start){
	struct node *prev=*next=NULL;
	struct node *curr=start;
	while(curr!=NULL){
	next=curr->next;
	curr->next=prev;
	prev=curr;
	curr=next;
	}
	return prev;
}	


//display
void display(struct node *start){
printf("Yes");
struct node *temp=start;
while(temp!=NULL){
printf("%d",temp->data);
temp=temp->next;
}
}

void main(){
struct node *start=NULL;
start=create(start);
display(start);
printf("\n");
start=reverse(start);
display(start);
}
