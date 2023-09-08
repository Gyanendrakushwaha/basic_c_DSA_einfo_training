////mirror is incomplete

#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node* left;
struct node* right;
};



//inorder
void inorder(struct node* root){
		if(root == NULL){
			return;}

		inorder(root->left);
		printf("%d",root->data);
		inorder(root->right);
}

// node create
struct node *createnode(int data){
struct node *new=malloc(sizeof(struct node));
new->data=data;
new->left=NULL;
new->right=NULL;
return new;
}

//tree create
struct node *create_tree(struct node *root){
int data;
printf("enter the data for node");
scanf("%d",&data);
//exit conition
if(data==-1){
return NULL;
}
else{
root=createnode(data);
root->left=create_tree(root->left);
root->right=create_tree(root->right);
return root;
}}


//function for mirror tree
int mirror(struct node* root){
struct node* temp;
	if (root == NULL){
		return 0;
		}
	temp = root->left;
	root->left = root->right;
	root->right = temp;

	root->left =mirror(root->left);
	root->right=mirror(root->right);

return root;
}
void main(){
struct node* root = NULL;

root =create_tree(root);
printf("\n");
mirror(root);
inorder(root);

}
