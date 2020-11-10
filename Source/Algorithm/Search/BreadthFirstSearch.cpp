/*
Breadth First Search for a Graph
*/
/* Code by KingNNT */
#include <bits/stdc++.h>

#define pathio "/mnt/Learning And Working/Code/C-CPP/GNU-Compiler/In-Out/"
// #define pathio "E:/Code/C-CPP/GNU-Compiler/In-Out/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

using namespace std;

class Graph
{
	int V;
	list<int> *adj;

public:
	Graph(int V);
	void addEdge(int v, int w);
	void BFS(int s);
};

Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w);
}

void Graph::BFS(int s)
{
	bool *visited = new bool[V];
	for (int i = 0; i < V; i++)
		visited[i] = false;

	list<int> queue;

	visited[s] = true;
	queue.push_back(s);

	list<int>::iterator i;

	while (!queue.empty())
	{
		s = queue.front();
		cout << s << " ";
		queue.pop_front();

		for (i = adj[s].begin(); i != adj[s].end(); ++i)
		{
			if (!visited[*i])
			{
				visited[*i] = true;
				queue.push_back(*i);
			}
		}
	}
}

int main()
{
	freopen(lfi);
	freopen(lfo);
	// ios_base :: sync_with_stdio (0);
	cin.tie(0);

	Graph g(12);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 0);
	g.addEdge(1, 3);
	g.addEdge(1, 4);
	g.addEdge(2, 0);
	g.addEdge(2, 4);
	g.addEdge(2, 5);
	g.addEdge(3, 0);
	g.addEdge(3, 1);
	;
	g.addEdge(3, 6);
	g.addEdge(4, 1);
	g.addEdge(4, 2);
	g.addEdge(5, 1);
	g.addEdge(5, 2);
	g.addEdge(5, 4);
	g.addEdge(5, 7);
	g.addEdge(6, 3);
	g.addEdge(6, 8);
	g.addEdge(7, 0);
	g.addEdge(7, 1);
	g.addEdge(7, 5);
	g.addEdge(7, 9);
	g.addEdge(8, 10);
	g.addEdge(9, 1);
	g.addEdge(9, 2);
	g.addEdge(9, 11);
	g.addEdge(11, 2);
	g.addEdge(11, 4);
	g.addEdge(11, 9);

	cout << "Following is Breadth First Traversal "
		 << "(starting from vertex 0) \n";
	g.BFS(0);

	return 0;

	fclose(stdin);
	fclose(stdout);
	return 0;
}