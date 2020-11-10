/**/
/* Code by KingNNT */
#include <bits/stdc++.h>

#define pathio "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/In-Out/"
// #define pathio "E:/Develop/C-CPP/GNU-Compiler/In-Out/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

using namespace std;

void solve()
{
	int N = 1000;
	bool check[N + 1];
	// Khởi tạo tất cả các số [2...N] đều là số nguyên tố
	for (int i = 2; i <= N; i++)
	{
		check[i] = true;
	}

	// Thuật toán sàng nguyên tố
	// Nếu một số là số nguyên tố, thì tất cả các bội của nó không phải số nguyên tố
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
	// In ra các số là số nguyên tố
	for (int i = 2; i <= N; i++)
	{
		if (check[i] == true)
		{
			printf("%d ", i);
		}
	}
}

int main()
{
	freopen(lfi);
	freopen(lfo);
	// ios_base :: sync_with_stdio (0);
	cin.tie(0);

	cout << "Hi";

	fclose(stdin);
	fclose(stdout);
	return 0;
}