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

	for (int i = 1; i <= s.length(); i++)
	{
		if (s.length() % i == 0)
		{
			if (i == 1)
			{
				unordered_map<char, int> un;
				for (int j = 0; j < s.length(); j++)
					un[s[j]]++;
				if (un.size() == 1)
				{
					cout << s.length();
					return;
				}
			}
			else if (i == s.length())
			{
				cout << 1;
				return;
			}
			else
			{
				unordered_map<char, int> un;
				for (int j = 0; j < i; j++)
					un[s[j]]++;
				int count = s.length() / i;
				for (int j = i; j < s.length(); j += i)
				{
					bool check = 0;
					count--;
					unordered_map<char, int> un2;
					for (int z = j; z < i + j; z++)
						un2[s[z]]++;
					if (un.size() != un2.size())
					{
						break;
					}
					else
					{
						for (auto x : un2)
						{
							unordered_map<char, int>::const_iterator got = un.find(x.first);
							if (got == un2.end())
							{
								check = 1;
								break;
							}
							else
							{
								int temp = got->second;
								if (temp != x.second)
								{
									check = 1;
									break;
								}
							}
						}
						if (count == 1 && check == 0)
						{
							cout << s.length() / i;
							return;
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