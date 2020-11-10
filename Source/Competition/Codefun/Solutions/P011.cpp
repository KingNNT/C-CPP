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

	float a, b, c;
	do
		cin >> a >> b >> c;
	while (a > 100 || b > 100 || c > 100);
	float p = (a + b + c) / 2;

	// double number = 2;
	// size_t decimal_places(2);
	// cout << showpoint << setprecision(static_cast<int>(log10(number)) + 1 + decimal_places);

	// cout << sqrt(p * (p - a) * (p - b) * (p - c));

	printf("%.2f", sqrt(p * (p - a) * (p - b) * (p - c)));

	fclose(stdin);
	fclose(stdout);
	return 0;
}