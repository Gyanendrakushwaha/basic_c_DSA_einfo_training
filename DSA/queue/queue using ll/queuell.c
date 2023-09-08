#include<stdio.h>
#include<stdlib.h>

struct node {
int data;
struct node *link;
};
struct node *front=-1;
struct node *rear=-1;

void enqueue(int data){

//creating new node
struct node *new=(struct node *)malloc(sizeof(struct node));
new->data=data;
new->link=0;
if(front==-1){
front=rear=new;
}else{
rear->link=new;
rear=new;
}
}

void display(){
if((front==-1) &&(rear==-1)){
printf("queue is empty");
}
struct node *temp=front;
while(temp){
printf("%d",temp->data);
temp=temp->link;
}
}

void dequeue(){
//queue is empty
if(front==0){
printf("Queueu is empty");
return;
}else{
struct node *temp=front;
front=front->link;
printf("%d",temp->data);
free(temp);
//printf("Queueu" );
}
}
int main(){
enqueue(1);
enqueue(2);
enqueue(3);
enqueue(4);
display();
printf("\n");
dequeue();
printf("\n");
display();
}
