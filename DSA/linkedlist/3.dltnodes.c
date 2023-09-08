#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node *start;

struct node{
int data;
struct node* next;;
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
}

}


////////////////////////  adding node at begining
void insertBegining(){
//create memory allocation
struct node *newnode=(struct node *)malloc(sizeof(struct node));
printf("enter data you want to add"); 
scanf("%d",&newnode->data);

newnode->next=start;
start=newnode;
}

//////////////  adding node at end
void insertEnd(){
struct node *newnode=(struct node *)malloc(sizeof(struct node));
printf("enter data you want to add"); 
scanf("%d",&newnode->data);

struct node *temp=start;
while(temp->next!= NULL){
temp=temp->next;
}
temp->next=newnode;

}

///////////   adding at specific position
void insertAtpos(int p){
struct node *newnode=(struct node *)malloc(sizeof(struct node));
printf("enter data you want to add"); 
scanf("%d",&newnode->data);

struct node *temp=start;
p=p-1;
while(temp->next!= NULL && --p){
temp=temp->next;
}
newnode->next=temp->next;
temp->next=newnode;
}

//delete first node
void dltfirst(){
struct node *temp=start;
start=temp->next;
free(temp);

}

//delete at  end
void dltend(){
struct node *temp=start;
while(temp->next->next!=NULL){
temp=temp->next;
}
struct node *temp2=temp;
temp=temp->next;
temp2->next=NULL;
free(temp);

}


//delete at specific position
void dltAtP(int p){
struct node *temp1=start;
struct node *temp2=start;
//struct node *temp3;
p=p-1;
while(temp1->next!= NULL && --p){
temp1=temp1->next;
}
//temp3=temp1->next;
temp2=temp1->next;
temp1->next=temp2->next;
free(temp2);
}
void  main(){
createlist();
struct node *ptr=start;
int i=0;
while(ptr!=NULL){
printf("node = %d value = %d \n",i+1,ptr->data);
i++;
ptr=ptr->next;
}

/*
insertBegining();
 ptr=start;
while(ptr!=NULL){
printf("node = %d value = %d \n",i+1,ptr->data);
i++;
ptr=ptr->next;
}

insertEnd();
insertAtpos(2);
 ptr=start;
while(ptr!=NULL){
printf("node = %d value = %d \n",i+1,ptr->data);
i++;
ptr=ptr->next;
}

*/

/*
dltfirst();

 ptr=start;
 printf("\n");
while(ptr!=NULL){
printf("node = %d value = %d \n",i+1,ptr->data);
i++;
ptr=ptr->next;
}

dltend();
 ptr=start;
 printf("\n");
while(ptr!=NULL){
printf("node = %d value = %d \n",i+1,ptr->data);
i++;
ptr=ptr->next;
}
*/

printf("enter index to delete");
int p;
scanf("%d",&p);
dltAtP(p);
 ptr=start;
 printf("\n");
while(ptr!=NULL){
printf("node = %d value = %d \n",i+1,ptr->data);
i++;
ptr=ptr->next;
}
}
