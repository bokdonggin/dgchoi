/* DATE : 2020. 07 . 07 */
/* NAME : BOKDONGJIN    */

#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	char data;
	struct node* left;
	struct node* right;
}node;

node* A, * B, * C, * D, * E, * F, * G;

void Traverse(node*);
void Visit(node*);
void Traverse(node* p_node)
{
	if (p_node != NULL)
	{
		Traverse(p_node->left);
		Visit(p_node);
		Traverse(p_node->right);
	}
}

void Visit(node* c_node)
{
	printf("%2c->", c_node->data);
}

int main()
{
	A = (node*)malloc(sizeof(node));
	B = (node*)malloc(sizeof(node));
	C = (node*)malloc(sizeof(node));
	D = (node*)malloc(sizeof(node));
	E = (node*)malloc(sizeof(node));
	F = (node*)malloc(sizeof(node));
	G = (node*)malloc(sizeof(node));
    
	A->data = 'A';
	B->data = 'B';
	C->data = 'C';
	D->data = 'D';
	E->data = 'E';
	F->data = 'F';
	G->data = 'G';

	A->left = B;
	A->right = C;
	B->left = D;
	B->right = E;
	C->left = F;
	C->right = G;

	D->left = NULL;
	D->right = NULL;
	E->left = NULL;
	E->right = NULL;
	F->left = NULL;
	F->right = NULL;
	G->left = NULL;
	G->right = NULL;
	D->left = NULL;

	Traverse(A);

	printf("\n");

	free(A);
	free(B);
	free(C);
	free(D);
	free(E);
	free(F);
	free(G);
	
}