/**/
/* Code by KingNNT */
#include <bits/stdc++.h>

#define pathio "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/In-Out/"
// #define pathio "E:/Develop/C-CPP/GNU-Compiler/In-Out/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

using namespace std;

bool checkResult(int x)
{
	int deviceNumber = 0;
	int sum = 0;
	for (; x != 0;)
	{
		deviceNumber = x % 10;
		sum += deviceNumber;
		x /= 10;
	}

	return sum % 10 == 0;
}

void solve(int m, int n)
{
	int N = m * n;
	bool check[N + 1];

	for (int i = 2; i <= N; i++)
	{
		check[i] = true;
	}

	for (int i = 2; i <= N; i++)
	{
		if (check[i] == true)
		{
			for (int j = 2 * i; j <= N; j += i)
			{
				check[j] = false;
			}
		}
	}

	int count = 0;
	vector<int> list;

	for (int i = m; i <= N; i++)
	{
		if (check[i] == true)
		{
			list.push_back(i);
			count++;
		}

		if (count == n)
		{
			break;
		}
	}

	int result = 0;
	for (auto &x : list)
	{
		// cout << x << endl;
		if (checkResult(x))
		{
			// cout << x << endl;
			result++;
		}
	}

	cout << result;
}

int main()
{
	freopen(lfi);
	freopen(lfo);
	// ios_base :: sync_with_stdio (0);
	cin.tie(0);

	int m, n;
	cin >> m >> n;

	solve(m, n);

	fclose(stdin);
	fclose(stdout);
	return 0;
}