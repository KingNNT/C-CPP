/*
BFS for tree
Use function to print a given level
*/
/* Code by KingNNT */
#include <bits/stdc++.h>

#define pathio "/mnt/Learning And Working/Code/C-CPP/GNU-Compiler/In-Out/"
// #define pathio "E:/Code/C-CPP/GNU-Compiler/In-Out/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

using namespace std;

class node
{
public:
	int data;
	node *left, *right;
};

void printGivenLevel(node *root, int level);
int height(node *node);
node *newNode(int data);

void printLevelOrder(node *root)
{
	int h = height(root);
	int i;
	for (i = 1; i <= h; i++)
		printGivenLevel(root, i);
}

void printGivenLevel(node *root, int level)
{
	if (root == NULL)
		return;
	if (level == 1)
		cout << root->data << " ";
	else if (level > 1)
	{
		printGivenLevel(root->left, level - 1);
		printGivenLevel(root->right, level - 1);
	}
}

int height(node *node)
{
	if (node == NULL)
		return 0;
	else
	{
		int lheight = height(node->left);
		int rheight = height(node->right);

		/* use the larger one */
		if (lheight > rheight)
			return (lheight + 1);
		else
			return (rheight + 1);
	}
}

node *newNode(int data)
{
	node *Node = new node();
	Node->data = data;
	Node->left = NULL;
	Node->right = NULL;

	return (Node);
}

int main()
{
	freopen(lfi);
	freopen(lfo);
	// ios_base :: sync_with_stdio (0);
	cin.tie(0);

	node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	cout << "Level Order traversal of binary tree is \n";
	printLevelOrder(root);

	return 0;

	fclose(stdin);
	fclose(stdout);
	return 0;
}