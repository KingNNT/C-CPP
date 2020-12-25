/**/
/* Code by KingNNT */

/* Include File */
#include <bits/stdc++.h>
#include <thread>

// #include ""

/* Define */

#define pathio "/mnt/LearningAndWorking/Develop/C-CPP/GNU-Compiler/In-Out/"
// #define pathio "E:/Develop/C-CPP/GNU-Compiler/In-Out/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

using namespace std;

/* ---------- | ---------- | ---------- | ---------- | ---------- */
void task1()
{
	ofstream file;
	file.open(pathio "output.txt");
	char c;
	while (1)
	{
		c = getchar();
		if (c == 33)
		{
			file << c;
			break;
		}
		file << c;
	}
	file.close();
	return;
}

void task2()
{
	ifstream file;
	file.open(pathio "output.txt");
	char c;
	while (file >> c)
	{
		if (c == 33)
		{
			break;
		}
		cout << c << endl;
	}
	file.close();
	return;
}

void solve()
{
	thread firstThread(task1);
	firstThread.join();
	thread secondThread(task2);
	secondThread.join();
	return;
}

int main()
{
	// freopen(lfi);
	// freopen(lfo);
	// // ios_base :: sync_with_stdio (0);
	// cin.tie(0);

	solve();

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}