/*
BFS for tree
Use queue
*/
/* Code by KingNNT */
#include <bits/stdc++.h>

#define pathio "/mnt/Learning And Working/Code/C-CPP/GNU-Compiler/In-Out/"
// #define pathio "E:/Code/C-CPP/GNU-Compiler/In-Out/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

using namespace std;

struct Node
{
	int data;
	struct Node *left, *right;
};

void printLevelOrder(Node *root)
{
	if (root == NULL)
		return;
	queue<Node *> q;
	q.push(root);

	while (q.empty() == false)
	{
		Node *node = q.front();
		cout << node->data << " ";
		q.pop();

		if (node->left != NULL)
			q.push(node->left);

		if (node->right != NULL)
			q.push(node->right);
	}
}

Node *newNode(int data)
{
	Node *temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

int main()
{
	freopen(lfi);
	freopen(lfo);
	// ios_base :: sync_with_stdio (0);
	cin.tie(0);

	Node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	cout << "Level Order traversal of binary tree is " << endl;
	printLevelOrder(root);
	return 0;

	fclose(stdin);
	fclose(stdout);
	return 0;
}