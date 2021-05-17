/**/
/* FIXME: Partial Accepted */
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

void solve()
{
	float n;
	cin >> n;
	if (n >= 0)
	{
		int ceilNumber = ceil(n);
		int floorNumber = floor(n);

		if (abs(n - ceilNumber) <= abs(n - floorNumber))
		{
			cout << ceilNumber << endl;
		}
		else
		{
			cout << floorNumber << endl;
		}
	}
	else
	{
		int ceilNumber = ceil(n);
		int floorNumber = floor(n);

		cout << ceilNumber << " " << floorNumber << endl;
		if (abs(n - ceilNumber) < abs(n - floorNumber))
		{
			cout << ceilNumber << endl;
		}
		else
		{
			cout << floorNumber << endl;
		}
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