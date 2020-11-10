/**/
/* Code by KingNNT */
#include <bits/stdc++.h>

#define pathio "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/In-Out/"
// #define pathio "E:/Develop/C-CPP/GNU-Compiler/In-Out/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

using namespace std;

void Check(int a)
{
	if (a == 2)
	{
		cout << "YES";
		return;
	}
	for (int i = 2; i <= sqrt(a); i++)
	{
		if (a % i == 0)
		{
			cout << i;
			return;
		}
	}
}

int main()
{
	freopen(lfi);
	freopen(lfo);
	// ios_base :: sync_with_stdio (0);
	cin.tie(0);

	int a;
	cin >> a;
	Check(a);

	fclose(stdin);
	fclose(stdout);
	return 0;
}