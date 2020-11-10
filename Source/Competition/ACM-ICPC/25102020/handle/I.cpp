/**/
/* Code by KingNNT */
#include <bits/stdc++.h>

#define pathio "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/In-Out/"
// #define pathio "E:/Develop/C-CPP/GNU-Compiler/In-Out/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

using namespace std;

void solve(string p, string s)
{
	string strRegex;
	int count = 0;
	for (int i = 0; i < p.length(); i++)
	{
		if (p[i] == '*')
		{
			strRegex = strRegex + "(." + p[i] + ")";
		}
		else
		{
			strRegex = strRegex + "(" + p[i] + ")";
		}
	}

	for (int i = 0; i < s.length(); i++)
	{
		string temp, x, y;
		// for (int j = 0; j < i; j++)
		// {
		// 	x += s[j];
		// }

		// for (int j = i; j < s.length(); j++)
		// {
		// 	y += s[j];
		// }

		if (size_t found = s.find(s[i]) != string::npos)
		{
			x = s.substr(0, found);
			y = s.substr(found, string::npos);
		}

		temp = y + x;

		if (regex_match(temp, regex(strRegex)))
		{
			count++;
		}
	}

	cout << count;
}

int main()
{
	// freopen(lfi);
	// freopen(lfo);
	// // ios_base :: sync_with_stdio (0);
	// cin.tie(0);

	string s, p;
	cin >> p >> s;

	solve(p, s);
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}