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
	// do
	cin >> n;
	// while (n < 0);
	// cout << n + 1;

	int *arr = new int[n + 5];
	arr[0] = 1;
	arr[1] = 2;
	if (n < 3)
		cout << arr[n];
	else
	{
		for (int i = 2; i < n; i++)
			arr[i] = 2 * arr[i - 1] - arr[i - 2];
		cout << arr[n];
	}

	fclose(stdin);
	fclose(stdout);
	return 0;
}