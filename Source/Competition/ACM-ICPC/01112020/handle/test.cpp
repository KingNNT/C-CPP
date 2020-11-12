/**/
/* Code by KingNNT */
#include <bits/stdc++.h>

#define pathio "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/In-Out/"
// #define pathio "E:/Develop/C-CPP/GNU-Compiler/In-Out/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

using namespace std;

string longDivision(string number, int divisor)
{
	// As result can be very large store it in string
	string ans;

	// Find prefix of number that is larger
	// than divisor.
	int idx = 0;
	int temp = number[idx] - '0';
	while (temp < divisor)
		temp = temp * 10 + (number[++idx] - '0');

	// Repeatedly divide divisor with temp. After
	// every division, update temp to include one
	// more digit.
	while (number.size() > idx)
	{
		// Store result in answer i.e. temp / divisor
		ans += (temp / divisor) + '0';

		// Take next digit of number
		temp = (temp % divisor) * 10 + number[++idx] - '0';
	}

	// If divisor is greater than number
	if (ans.length() == 0)
		return "0";

	// else return ans
	return ans;
}

int mod(string num, int a)
{
	// Initialize result
	int res = 0;

	// One by one process all digits of 'num'
	for (int i = 0; i < num.length(); i++)
		res = (res * 10 + (int)num[i] - '0') % a;

	return res;
}

int main()
{
	freopen(lfi);
	freopen(lfo);
	// ios_base :: sync_with_stdio (0);
	cin.tie(0);

	cout << mod("999999999999999998", 7);

	fclose(stdin);
	fclose(stdout);
	return 0;
}