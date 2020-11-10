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

	int n, k;
	do
		cin >> n >> k;
	while (n < 0 || k < 0);
	for (int r = 1; r < k; r++)
	{
		float q = (float)(n - r) / k;
		if ((int)q == (float)q && q > 0)
		{
			cout << q + r;
		}
	}

	fclose(stdin);
	fclose(stdout);
	return 0;
}