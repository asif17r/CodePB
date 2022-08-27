// Binary Search Tree - Implemenation in C++
// Simple program to create a BST of integers and search an element in it 
#include<bits/stdc++.h>
using namespace std;
//Definition of Node for Binary search tree
struct BstNode {
	int data; 
	BstNode* left;
	BstNode* right;
};

// Function to create a new Node in heap
BstNode* GetNewNode(int data) {
	BstNode* newNode = new BstNode();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

// To insert data in BST, returns address of root node 
BstNode* Insert(BstNode* root,int data) {
	if(root == NULL) { // empty tree
		root = GetNewNode(data);
	}
	// if data to be inserted is lesser, insert in left subtree. 
	else if(data <= root->data) {
		root->left = Insert(root->left,data);
	}
	// else, insert in right subtree. 
	else {
		root->right = Insert(root->right,data);
	}
	return root;
}
//To search an element in BST, returns true if element is found
bool Search(BstNode* root,int data) {
	if(root == NULL) {
		return false;
	}
	else if(root->data == data) {
		return true;
	}
	else if(data <= root->data) {
		return Search(root->left,data);
	}
	else {
		return Search(root->right,data);
	}
}
vector<int>preorderBag, inorderBag, postorderBag;
void preorder(BstNode* root){
    if(root == NULL) return;
    preorderBag.push_back(root->data);
    preorder(root->left);
    preorder(root->right);
}
void inorder(BstNode* root){
    if(root == NULL) return;
    inorder(root->left);
    inorderBag.push_back(root->data);
    inorder(root->right);
}
void postorder(BstNode* root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    postorderBag.push_back(root->data);
}

int main() {
	BstNode* root = NULL;  // Creating an empty tree
	/*Code to test the logic*/
    printf("Enter number of element you want to insert: ");
    int n; scanf("%d", &n);
    printf("Enter the numbers: ");
    for(int i = 0; i < n; i++){
        int number; scanf("%d", &number);
        root = Insert(root, number);
    }
	// Ask user to enter a number.  
	printf("Enter number of elements you want to search: ");
    scanf("%d",&n);
    printf("Enter the numbers one by one\n");
    for(int i = 0; i < n; i++){
        int number; scanf("%d", &number);
        if(Search(root, number) == true){
            printf("Found\n");
        }else{
            printf("Not Found\n");
        }
    }

    //inorder
    inorder(root);
    printf("Inorder traversal of the tree is: ");
    for(int a: inorderBag){
        printf("%d ", a);
    }
    printf("\n");

    //preorder
    preorder(root);
    printf("Preorder traversal of the tree is: ");
    for(int a: preorderBag){
        printf("%d ", a);
    }
    printf("\n");
    
    //postorder
    postorder(root);
    printf("Postorder traversal of the tree is: ");
    for(int a: postorderBag){
        printf("%d ", a);
    }
    printf("\n");
}
