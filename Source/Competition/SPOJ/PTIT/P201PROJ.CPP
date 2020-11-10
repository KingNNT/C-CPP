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
	// freopen(lfi);
	// freopen(lfo);
	// // ios_base :: sync_with_stdio (0);
	// cin.tie(0);

	long long n;
	cin >> n;
	for (long long j = 0; j < n; j++)
	{
		long long a, b;
		cin >> a >> b;
		long long i = 1;
		long dem = 0;

		while (pow(10, i) <= b)
		{
			dem++;
			i++;
		}
		cout << dem * a << endl;
	}

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}