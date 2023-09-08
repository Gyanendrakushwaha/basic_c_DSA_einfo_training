#include<stdio.h>
#include<stdlib.h>

//globally allocate start and last
struct node *start=NULL;
struct node *last=NULL;

//structure for node
struct node {
	struct node *prev;
	int data;
	struct node *next;
};

//creating first node
struct node* createnode(){
	struct node *new=malloc(sizeof(struct node));
	new->next=NULL;
	new->prev=NULL;
	printf("enter data for node");
	scanf("%d",&new->data);
	return new;
}

//creating circular linked list
void createcircular(){
struct node *new;

//ask user for number of nodes
int n;
printf("Enter the number of nodes");
scanf("%d",&n);

//creating first node
new = createnode();
start=last=new;

//creating rest of nodes
for(int i=1;i<n;i++)
{
new = createnode();
last->next=new;
new->prev=last;
last=new;
}
}

void display_start(){
	struct node *temp=start;
	while(temp!=NULL){
	printf("%d",temp->data);
	temp=temp->next;
	}
}


void display_end(){
	struct node *temp=last;
	while(temp!=NULL){
	printf("%d",temp->data);
	temp=temp->prev;
	}
}

/////////   insert at start ////
void insert_start(){
//creating new node
struct node *new=createnode();


//updating start and linking
new->next=start;
start->prev=new;
start=new;
}



/////////   insert at end ////
void insert_end(){
//creating new node
struct node *new=createnode();


//updating start and linking
new->prev=last;
last->next=new;
last=new;
}


int main(){
createcircular();
display_start();

//inserting at start
//printf("\n");
//insert_start();

//inserting at end
printf("\n");
insert_end();


//display updated value
printf("\n");
display_start();
}

