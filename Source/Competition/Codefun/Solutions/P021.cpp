/**/
/* Code by KingNNT */
#include <bits/stdc++.h>

#define pathio "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/In-Out/"
// #define pathio "E:/Develop/C-CPP/GNU-Compiler/In-Out/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

using namespace std;

int main()
{
	freopen(lfi);
	freopen(lfo);
	// ios_base :: sync_with_stdio (0);
	cin.tie(0);

	int n;
	do
		cin >> n;
	while (n <= 0);
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
			cout << "*";
		cout << endl;
	}

	fclose(stdin);
	fclose(stdout);
	return 0;
}