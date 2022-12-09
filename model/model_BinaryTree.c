#include <stdio.h>

// Define Tree Node
typedef struct TreeNode{
	int data;
	struct TreeNode *left, *right;
} TreeNode;

/*

		  15
	4			20
1			16		25

*/

TreeNode n1 = {1, NULL, NULL};
TreeNode n2 = {4, &n1, NULL};
TreeNode n3 = {16, NULL, NULL};
TreeNode n4 = {25, NULL, NULL};
TreeNode n5 = {20, &n3, &n4};
TreeNode n6 = {15, &n2, &n5};
TreeNode *root = &n6;

// Define inorder()
void inorder(TreeNode *root){
	if(root!=NULL){
		inorder(root->left);
		printf("[%d] ", root->data);
		inorder(root->right);
	}
}

// Define preorder()
void preorder(TreeNode *root){
	if(root!=NULL){
		printf("[%d] ", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

// Define postorder()
void postorder(TreeNode *root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		printf("[%d] ", root->data);
	}
}



// main
int main(){
	printf("중위 순회 : ");
	inorder(root);
	printf("\n");

	printf("전위 순회 : ");
	preorder(root);
	printf("\n");

	printf("후위 순회 : ");
	postorder(root);
	printf("\n");
}
