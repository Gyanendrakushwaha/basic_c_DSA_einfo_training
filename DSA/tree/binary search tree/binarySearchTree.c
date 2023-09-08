#include<stdio.h>
#include<stdlib.h>

struct node {
int data;
struct node *left;
struct node *right;
};


// node create
struct node *createnode(int data){
struct node *new=malloc(sizeof(struct node));
new->data=data;
new->left=NULL;
new->right=NULL;
return new;
}



struct node *insert_BST(struct node *root,int data){
/*
if(data==-1){
return NULL;
}
*/
//create root node
if(root==NULL){
root=createnode(data);
}
else{
//create left sub tree recursively
if(data<root->data)
{
root->left =insert_BST(root->left,data);
}else{
//create right subtree recursively
root->right=insert_BST(root->right,data);
}
}
return root;
}


struct node *takeinput(struct node *root){
int no;
printf("enter the data for binary tree");
scanf("%d",&no);
//terminate if -1 entered
while(no != -1){
root=insert_BST(root,no);

printf("enter the data for binary tree");
scanf("%d",&no);
}
return root;
}

void main(){
struct node *root=NULL;
root=takeinput(root);
}
