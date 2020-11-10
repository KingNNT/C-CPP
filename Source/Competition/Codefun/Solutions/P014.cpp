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

	char a, b;
	cin >> a >> b;
	if ((int)a >= (int)b)
	{
		cout << 0;
		return 0;
	}
	cout << (int)b - (int)a + 1 - 2;

	fclose(stdin);
	fclose(stdout);
	return 0;
}