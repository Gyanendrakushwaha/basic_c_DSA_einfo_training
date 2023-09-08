#include<stdio.h>
#include<stdlib.h>

struct node {
struct node *left;
int data;
struct node *right;
};



struct node *createnode(int data){
struct node *new=malloc(sizeof(struct node));



new->data=data;
new->left=NULL;
new->right=NULL;

return new;
}

struct node *insertTree(){
struct node *root=NULL;
printf("enter data");
int data;
scanf("%d",&data);

//exit condition
if(data == -1){
return NULL;
}

//recursive
root=createnode(data);
root->left=insertTree();
root->right=insertTree();

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
int main(){
struct node *root=NULL;
root=insertTree();

//calling inorder
printf("\n");
printf("in order ");
inorder(root);
}

