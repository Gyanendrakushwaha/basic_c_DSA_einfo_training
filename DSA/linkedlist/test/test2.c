//////  link list is palindrome or not
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node *start;

struct node{
int data;
struct node* next;;
};

int createlist(){
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
return n;
}


void ispalindrome(int length){


struct node *temp2=start;

//accessing second half
for(int i=0;i<(length/2);i++){
temp2=temp2->next;
}
temp2=temp2->next;

//reversing first half
struct node *temp1=start;
struct node *rev1=start;
struct node *rev2=start;
temp1=start->next->next;
rev1=start1->next;


//printf("%d",temp2->data);
//printf("%d",temp1->data);
int flag=1;

for(int i=0;i<(length/2);i++){
//printf("%d ",temp1->data);
//printf("%d ",temp2->data);

if(temp1->data != temp2->data){
flag=0;
}
temp1=temp1->next;
temp2=temp2->next;
}

printf("%d",flag);
}







void  main(){
int length=createlist();
struct node *ptr=start;
int i=0;

ispalindrome(length);

/*
while(ptr!=NULL){
printf("node = %d value = %d \n",i+1,ptr->data);
i++;
ptr=ptr->next;
}
*/


}
