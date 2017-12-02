#include<stdio.h>
#include<conio.h>
#include "BT.h"

  int main(){
		int num,i;
		TreeEntry x;
		TreeNode *node,*Tree;
		char c;
		int select;
		int list[]={1,4,6,7,12,13,15,18,19,20,22,24};

		clrscr();

			do{
		printf("******************************     BINARY TREE     *****************************");
		printf("\n\n");
		printf("1-TREE TRANSVERSAL\n");
		printf("2-SWAP TREE NODES\n");
		printf("3-EXIT\n");

		printf("\n");
		printf("Binary Tree Data Set is : [1,4,6,7,12,13,15,18,19,20,22,24]\n\n");

		printf("Choose the Selection[1,2,3]\n");
		scanf("%d",&select);
		CreateTree(&node);
			for(i=0;i<12;i++){

		 TreeNode *newnode=(TreeNode*)malloc(sizeof(TreeNode));
		 newnode->entry=list[i];
		 newnode->left=newnode->right=NULL;
		 node=InsertTree(node,newnode);

		  }

		 if(select==1){

			printf("Display Tree Transveral\n");
			printf("PreOrder --->");
			Preorder(node,Display);
			printf("\n");
			printf("InOrder  --->");
			Inorder(node,Display);
			printf("\n");
			printf("PostOrder--->");
			Postorder(node,Display);
			printf("\n");

		}else if(select==2){

			node=swap(node);
			printf("Tree Nodes are Swapped\n");
			printf("Tree Traversal\n");
			printf("PreOrder --->");
			Preorder(node,Display);
			printf("\n");
			printf("InOrder  --->");
			Inorder(node,Display);
			printf("\n");
			printf("PostOrder--->");
			Postorder(node,Display);
			printf("\n");

		}

		}while(select!=3);





	 getch();

	 return 0;
	    }