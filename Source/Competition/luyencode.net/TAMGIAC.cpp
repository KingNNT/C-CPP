/**/
/* Code by KingNNT */

/* Include File */
#include <bits/stdc++.h>
// #include ""

/* Define */

#define pathio "/mnt/LearningAndWorking/Develop/C-CPP/GNU-Compiler/In-Out/"
// #define pathio "E:/Develop/C-CPP/GNU-Compiler/In-Out/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

using namespace std;

/* ---------- | ---------- | ---------- | ---------- | ---------- */

bool check(long long int a, long long int b, long long int c)
{
	return (a + b > c && a + c > b && b + c > a);
}

void solve()
{
	long long int a, b, c;
	cin >> a >> b >> c;
	if (!check(a, b, c))
	{
		cout << "NO";
	}
	else
	{
		cout << a + b + c << " ";
		cout << fixed;
		cout << setprecision(2);
		long double p = (a + b + c) / 2;
		// cout << "P = " << p << endl;
		cout << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
	}
}

int main()
{
	freopen(lfi);
	freopen(lfo);
	// ios_base :: sync_with_stdio (0);
	cin.tie(0);

	solve();

	fclose(stdin);
	fclose(stdout);
	return 0;
}