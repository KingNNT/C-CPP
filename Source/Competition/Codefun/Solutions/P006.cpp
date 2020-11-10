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

	char s[100];
	fflush(stdin);
	cin.getline(s, 100);
	//cout << strrev(s);
	for (int i = strlen(s) - 1; i >= 0; i--)
		cout << s[i];

	fclose(stdin);
	fclose(stdout);
	return 0;
}