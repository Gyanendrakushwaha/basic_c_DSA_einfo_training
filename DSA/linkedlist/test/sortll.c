#include<stdio.h>
#include<stdlib.h>
struct node *head=NULL;
int n;
struct node {
int data;
struct node *next;
};

void createll(){
printf("enter the number of nodes");
scanf("%d",&n);

//creating first node
struct node *temp=(struct node *)malloc(sizeof(struct node));
printf("enter the data of first node");
scanf("%d",&temp->data);
temp->next=NULL;
head=temp;

for(int i=1;i<n;i++){
struct node *new=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->next=NULL;

temp->next=new;
temp=new;
}
}


//display linked list
void display(){
struct node *temp=head;
while(temp!=NULL){
printf("%d",temp->data);
temp=temp->next;
}
}

void swap(struct node *temp1,struct node *temp2){
int data=temp1->data;
temp1->data=temp2->data;
temp2->data=data;
}

void sort(){
struct node *temp =head;
struct node *temp1 =head;
for(int i=0;i<n-1;i++){
	for(int j=0;j<n-i-1;j++){
		if((temp->data)>(temp->next->data)){
			swap(temp,temp->next);
		}
		temp=temp->next;
	}
	temp=head;
}
}

void main(){
createll();
display();
printf("\n");
sort();
display();
}
