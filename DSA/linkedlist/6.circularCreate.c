///////////incomplete  insert in circular at begin
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node *start;

struct node{
int data;
struct node* next;;
};

void createcircularll(){
int n,x;
printf("enter the no of nodes");
scanf("%d",&n);

//creating first node
struct node* new=malloc(sizeof(struct node));
struct node *temp=new;
start=new;
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
}
temp->next=start;

}


//circular linked list
void circulardisplay(){
struct node *temp=start;
do{
printf("%d",temp->data);
temp=temp->next;
}while(temp!=start);
}


// inserting before head node
void insertatbegin(){
struct node *temp=start;
struct node *newnode=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newnode->data);

newnode->next=start;

while(temp->next!=NULL){
temp=temp->next;
}
temp->next=newnode;
start=newnode;
}











void  main(){
createcircularll();
struct node *ptr=start;
circulardisplay();
insertatbegin();
circulardisplay();

}
