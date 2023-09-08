////tree static ------ incomplete

#include<stdio.h>


struct node {
int data;
struct node *left;
struct node *right;
};

//creating root node
struct node *createnode(int data){
struct node *new=malloc(sizeof(struct node));
new->data=data;
new->left=NULL;
new->right=NULL;
return new;
}

struct node *insert_left(struct node *temp,int data){
temp=createnode(data);
return temp;
}

void main(){
struct node *root=NULL;

root = createnode(10);
root->left=insert_left(root->left,30);

}

