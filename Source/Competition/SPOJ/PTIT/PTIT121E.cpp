/**/
/* Code by KingNNT */
#include <bits/stdc++.h>

#define pathio "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/In-Out/"
// #define pathio "E:/Develop/C-CPP/GNU-Compiler/In-Out/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

using namespace std;
const int VALENCE_C = 12;
const int VALENCE_H = 1;
const int VALENCE_O = 16;

int calSum(char c)
{
	int sum = 0;
	switch (c)
	{
	case 'C':
	{
		sum += VALENCE_C;
		break;
	}
	case 'H':
	{
		sum += VALENCE_H;
		break;
	}
	case 'O':
	{
		sum += VALENCE_O;
		break;
	}
	}
	return sum;
}

int main()
{
	freopen(lfi);
	freopen(lfo);
	// ios_base :: sync_with_stdio (0);
	cin.tie(0);

	string s;
	cin >> s;
	int total = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(')
		total += calSum(s[i]);
	}

	cout << total;

	fclose(stdin);
	fclose(stdout);
	return 0;
}