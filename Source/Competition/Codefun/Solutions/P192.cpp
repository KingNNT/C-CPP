/**/
/* Code by KingNNT */
#include <bits/stdc++.h>

#define pathio "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/In-Out/"
// #define pathio "E:/Develop/C-CPP/GNU-Compiler/In-Out/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

using namespace std;

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void bubblesort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
}

int main()
{
	freopen(lfi);
	freopen(lfo);
	// ios_base :: sync_with_stdio (0);
	cin.tie(0);

	int a[6], dem = 1;
	for (int i = 0; i < 5; i++)
		cin >> a[i];
	bubblesort(a, 5);

	int max = 1, smax = a[0];
	for (int i = 0; i < 5; i++)
		if (a[i] == a[i + 1])
			dem++;
		else
		{
			if (max <= dem)
			{
				max = dem;
				smax = a[i];
				dem = 1;
			}
		}
	cout << smax;

	fclose(stdin);
	fclose(stdout);
	return 0;
}