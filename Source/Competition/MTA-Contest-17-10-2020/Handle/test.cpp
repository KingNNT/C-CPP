/**/
/* Code by KingNNT */
#include <bits/stdc++.h>

#define pathio "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/In-Out/"
// #define pathio "E:/Develop/C-CPP/GNU-Compiler/In-Out/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

using namespace std;

void solve(string s)
{

	/* Kiem tra voi uoc cua s.length() */
	for (int i = 1; i < s.length(); i++)
	{
		if (s.length() % i == 0)
		{
			/* TH s co tat ca ky tu giong nhau */
			if (i == 1)
			{
				unordered_map<char, int> umap;
				for (int j = 0; j < s.length(); j++)
				{
					umap[s[j]]++;
				}

				if (umap.size() == 1)
					cout << s.length();
			}
			else if (i == s.length())
			{
				cout << "1";
				// return;
			}
			else
			{
				unordered_map<char, int> umap;
				for (int j = 0; j < i; j++)
				{
					umap[s[j]]++;
				}
				for (int j = i; j < s.length(); j += i)
				{
					unordered_map<char, int> umapCheck;
					for (int k = j; k < j + i; k++)
					{
						umapCheck[s[k]]++;
					}

					if (umap.size() != umapCheck.size())
						break;
					else
					{
						for (char c = 'a'; c <= 'z'; c++)
						{
							cout << umap[c] << " - " << umapCheck[c] << endl;
							if (umap[c] != umapCheck[c])
								break;
							else if (umap[c] == umapCheck[c] &&c = 'z')
							{
								cout << i;
								break;
							}
						}
					}
				}
			}
		}
	}
}

int main()
{
	freopen(lfi);
	freopen(lfo);
	// ios_base :: sync_with_stdio (0);
	cin.tie(0);

	string s;
	cin >> s;

	solve(s);

	fclose(stdin);
	fclose(stdout);
	return 0;
}