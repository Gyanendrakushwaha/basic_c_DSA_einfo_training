#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *left;
struct node *right;
};


//function for node creatiion which return the address of new node created
struct node *createnode(int data){
	struct node *new=malloc(sizeof(struct node));
	new->data=data;

	new->left=NULL;
	new->right=NULL;
	return new;
}

//function for creating binary tree by is calling createnode and inserting in tree,this function will have root address and data as parameter
struct node  *insertTree(struct node *root,int data){
//check if root is null or not ,if root is null then create first node and store in root address
if(root==NULL){
root=createnode(data);
}
//creating rest of the nodes of binary tree using recursive call
else{
//if data is less than root->data,then data goes to left side
if(data<root->data){
root->left=insertTree(root->left,data);
}
else if(data>root->data){
root->right=insertTree(root->right,data);
}
}
return root;
}


//takeinput function will ask for data and pass the data to insertTree funtion to add in binary tree
//if -1 is entered then it terminartes that branch
struct node *takeinput(){
struct node *root=NULL;
int data;
printf("enter root data");
scanf("%d",&data);
 
 //terminate if -1 is entered
 while(data!=-1){
 root=insertTree(root,data);
 printf("enter data");
scanf("%d",&data);


 }
 return root;
}


//function for display of preorder
void preorder(struct node *root){
if(root==NULL){
return ;
}
printf("%d",root->data);
preorder(root->left);

preorder(root->right);
}

void main(){
struct node *root=NULL;
root = takeinput();
preorder(root);
}
