//**************Binary Tree*************//

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *left , *right;
}node;

node *root;

node* GetNode(int data){
	node *temp = (node*)malloc(sizeof(node));
	temp->data = data;
	temp->right = NULL;
	temp->left = NULL;
	return temp;
}
 
void Insert(int data){
	node *temp,*temp1;
	if(root == NULL){
		root = GetNode(data);
	}else{
		temp = root;
		while(temp != NULL){
			temp1 = temp;
			if(temp->data > data)
				temp = temp->left;
			else
				temp = temp->right;
		}
		if(temp1->data < data)
			temp1->right = GetNode(data);
		else
			temp1->left = GetNode(data);
	}
}

void postOrder(node *temp){
	if(temp!= NULL){
		postOrder(temp->left);
		postOrder(temp->right);
		printf("%4d",temp->data);
	}
}

int height(node *temp){
	int hl=0,hr=0;
	if(temp!=NULL){
		hl = height(temp->left);
		hr = height(temp->right);
		if(hl>hr)
			return hl+1;
		else
			return hr+1;
	}else{
		return 0;
	}
}


int main()
{
	int n,num;
	printf("Enter the number of Data : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		Insert(num);
	}
	postOrder(root);
	printf("\n%d is the Height\n",height(root));
	return 0;
}
