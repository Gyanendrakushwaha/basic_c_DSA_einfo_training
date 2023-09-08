#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node *left;
struct node *right;
};

//code for creating single node
struct node *createnode(int data){
struct node *new=malloc(sizeof(struct node));
new->data=data;
new->left=NULL;
new->right=NULL;
return new;
}


//function for creating tree using createnode() function
struct node *create_tree(struct node *root){
int data;
printf("enter the data for node");
scanf("%d",&data);
//exit conition
if(data==-1){
return NULL;
}
root=createnode(data);
root->left=create_tree(root->left);
root->right=create_tree(root->right);
return root;
}


//inorder display of tree
void inorder(struct node *root){
if(root==NULL){
return ;
}
inorder(root->left);
printf("%d",root->data);
inorder(root->right);
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

//function for display of post order
void postorder(struct node *root){
if(root==NULL){
return ;
}
postorder(root->left);
postorder(root->right);
printf("%d",root->data);
}

//height of tree function

int height(struct node *root){
int hl=0,hr=0;
if(root==0){
return 0;
}
hl=height(root->left); //3
hr=height(root->right); //2

if(hl>hr){
return hl+1;
}
else{
return hr+1;
}
}


void main(){
struct node *root=NULL;
root=create_tree(root);
//calling inorder
printf("\n");
printf("in order ");
inorder(root);

//calling preorder
printf("\n");
printf("pre order ");
preorder(root);

//calling post order
printf("\n");
printf("post order ");
postorder(root);


//calling height function
printf("\n");
int Theight=height(root);
printf("%d",Theight);
}

