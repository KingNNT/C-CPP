/**/
/* Code by KingNNT */
#include <bits/stdc++.h>

#define pathio "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/In-Out/"
// #define pathio "E:/Develop/C-CPP/GNU-Compiler/In-Out/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

using namespace std;

void solve(long long a, long long b)
{
	if (a >= b)
		cout << "YES";
	else
	{
		if (a >= 4)
			cout << "YES";
		else if (a == 1 && b == 1)
			cout << "YES";
		else if ((a == 2 || a == 3) && b <= 3)
			cout << "YES";
		else
			cout << "NO";
	}
	cout << endl;
}

int main()
{
	// freopen(lfi);
	// freopen(lfo);
	// // ios_base :: sync_with_stdio (0);
	// cin.tie(0);
	long long n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		long long a, b;
		cin >> a >> b;
		solve(a, b);
	}

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}