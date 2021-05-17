/**/
/* Code by KingNNT */

/* Include File */
#include <bits/stdc++.h>
// #include ""

/* Define */

#define pathio "/mnt/LearningAndWorking/Develop/C-CPP/GNU-Compiler/In-Out/"
// #define pathio "E:/Develop/C-CPP/GNU-Compiler/In-Out/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

#define PI 3.14

using namespace std;

/* ---------- | ---------- | ---------- | ---------- | ---------- */

void solve()
{
	float r;
	cin >> r;
	cout << fixed;
	cout << setprecision(3);
	cout << 2 * r * PI << endl;
	cout << r * r * PI << endl;
}

int main()
{
	freopen(lfi);
	freopen(lfo);
	// ios_base :: sync_with_stdio (0);
	cin.tie(0);

	solve();

	fclose(stdin);
	fclose(stdout);
	return 0;
}