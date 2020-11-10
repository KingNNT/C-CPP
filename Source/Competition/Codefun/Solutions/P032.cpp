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
	freopen(lfi);
	freopen(lfo);
	// ios_base :: sync_with_stdio (0);
	cin.tie(0);

	string c, s;
	fflush(stdin);
	getline(cin, c);

	for (int i = 0; i < c.length(); i++)
	{
		s += c[i];
		cout << s << endl;
	}

	for (int i = c.length(); i >= 1; i--)
	{
		cout << s << endl;
		s.pop_back();
	}

	fclose(stdin);
	fclose(stdout);
	return 0;
}