//// this linked list is created using another function create node ,here start is global

#include<stdio.h>
#include<stdlib.h>

struct node{

    struct node* next;

    int data;

   

};

struct node* start = NULL;

struct node* new;

 

// first node

struct node *createnode(){

//create first node

    struct node *new = malloc(sizeof(struct node));

    new->next = NULL;

    printf("enter node data");

    scanf("%d",&new->data);

    //new->data = data;

    return new;

}

 

 

//createing list

struct node* createlist(){

    struct node* temp;

    int n,i;

    //new = createnode();

   

   

    printf("enter no of nodes ");




    scanf("%d",&n);

   

   

    for(i=0;i<n;i++){

        struct node* temp;

        if(i==0){

            temp=createnode();

            start=temp;   //fix

        }

        else{

            temp->next=createnode();

            temp=temp->next;

        }

    }

   

}

 

void display(){

   struct node *temp=start;
	while(temp!=NULL){
	printf("%d",temp->data);
	temp=temp->next;
	}
   
}
 
void main(){

createlist();    
display();
}
