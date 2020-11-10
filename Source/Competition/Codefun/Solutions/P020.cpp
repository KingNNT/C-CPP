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

	string c;
	fflush(stdin);
	//do getline(cin,c); while (c.length() < 20);
	getline(cin, c);
	cout << (char)toupper(c[4]) << " " << (char)toupper(c[8]);

	fclose(stdin);
	fclose(stdout);
	return 0;
}