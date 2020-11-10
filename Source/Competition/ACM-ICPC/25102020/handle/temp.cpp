/**/
/* Code by KingNNT */
#include <bits/stdc++.h>

#define pathio "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/In-Out/"
// #define pathio "E:/Develop/C-CPP/GNU-Compiler/In-Out/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

using namespace std;

void solve(int n, string plaintext, string ciphertext)
{
	/* Tolowercase string */
	// std::transform(plaintext.begin(), plaintext.end(), plaintext.begin(),
	// 			   [](unsigned char c) { return std::tolower(c); });

	// std::transform(ciphertext.begin(), ciphertext.end(), ciphertext.begin(),
	// 			   [](unsigned char c) { return std::tolower(c); });

	// vector<int> keyList;
	int keyList[n + 5];
	for (int i = 0; i < n; i++)
	{
		// cout << plaintext[i] << " - " << (int)plaintext[i] << "\t\t";
		// cout << ciphertext[i] << " - " << (int)ciphertext[i] << "\t\t";
		int key = (int)ciphertext[i] - (int)plaintext[i];
		if (key > 0)
		{
			// cout << key << endl;
			// keyList.push_back(key);
			keyList[i] = key;
		}
		else
		{
			// cout << key + 26 << endl;
			// keyList.push_back(key + 26);
			keyList[i] = key + 26;
		}
	}

	unordered_map<int, int> unmap;
	for (int i = 0; i < n; i++)
	{
		unmap[keyList[i]]++;
	}

	for (auto x : unmap)
		cout << "(" << x.first << ", " << x.second << ")\n";

	// cout << endl
	// 	 << endl;
	// string s = "bow";
	// for (int i = 0; i < s.length(); i++)
	// {
	// 	cout << s[i] << " - " << (int)s[i] << endl;
	// }

	// cout << endl
	// 	 << "note" << endl;
	// cout << "a"
	// 	 << " - " << (int)'a' << "\t\t";
	// cout << "z"
	// 	 << " - " << (int)'z' << endl;
}

int main()
{
	freopen(lfi);
	freopen(lfo);
	// ios_base :: sync_with_stdio (0);
	cin.tie(0);

	int n;
	string plaintext, ciphertext, key;
	/* plaintext use key => ciphertext */
	cin >> n >> plaintext >> ciphertext;
	solve(n, plaintext, ciphertext);

	fclose(stdin);
	fclose(stdout);
	return 0;
}