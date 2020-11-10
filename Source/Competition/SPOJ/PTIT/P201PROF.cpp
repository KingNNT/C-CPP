/**/
/* Code by KingNNT */
#include <bits/stdc++.h>

#define pathio "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/In-Out/"
// #define pathio "E:/Develop/C-CPP/GNU-Compiler/In-Out/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

using namespace std;

int lcm(int a, int b)
{
	return (a * b) / __gcd(a, b);
}

int main()
{
	freopen(lfi);
	freopen(lfo);
	// ios_base :: sync_with_stdio (0);
	cin.tie(0);

	long long a, b;
	cin >> a >> b;
	cout.precision(20);

	if (b == 0)
	{
		cout << a;
	}
	else
	{
		if (a % 2 == 0)
		{
			cout << lcm(a, pow(10, b));
		}
		else
		{
			cout << a * pow(10, b);
		}
	}

	fclose(stdin);
	fclose(stdout);
	return 0;
}