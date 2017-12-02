#include <stdio.h>

#define EQ(a,b) ((a) == (b))
#define NE(a,b) ((a)!=  (b))

#define GT(a,b) ((a) >  (b))
#define LT(a,b) ((a) <  (b))


	typedef int TreeEntry;
	typedef enum {TRUE,FALSE}Boolean;
	typedef struct treenode TreeNode;

		typedef struct treenode{
			TreeEntry entry;
			TreeNode *left;
			TreeNode *right;
			TreeEntry index;
		} TreeNode;

	void CreateTree(TreeNode **root){
		*root=NULL;

	}
	Boolean TreeEmpty(TreeNode *root){
		return root==NULL;

	}
	void Preorder(TreeNode *root, void (*Visit)(TreeEntry x)){
		if(root){
			Visit(root->entry);
			Preorder(root->left,Visit);
			Preorder(root->right,Visit);

		}

	}
	void Inorder(TreeNode *root, void (*Visit)(TreeEntry x)){
		if(root){

			Inorder(root->left,Visit);
			Visit(root->entry);
			Inorder(root->right,Visit);

		}

	}
	void Postorder(TreeNode *root , void (*Visit)(TreeEntry x)){
		if(root){

			Postorder(root->left,Visit);
			Postorder(root->right,Visit);
			Visit(root->entry);

		}

	}
	TreeNode *InsertTree(TreeNode *root, TreeNode *newnode){
	 if (!root){
		 root=newnode;
		 root->left=root->right=NULL;
		}
	else if (LT(newnode->entry, root->entry))
		root->left=InsertTree(root->left,newnode);
	else
		root->right=InsertTree(root->right,newnode);
		return root;
	}
	TreeNode *swap(TreeNode *root){
	TreeNode *temp;
	if(root){
		temp=root->left;
		root->left=root->right;
		root->right=temp;
		root->left=swap(root->left);
		root->right=swap(root->right);
	

	}
	return root;

}
	void Display(TreeEntry x){
		printf("%d  ",x);

	}