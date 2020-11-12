/**/
/* Code by KingNNT */
#include <bits/stdc++.h>

#define pathio "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/In-Out/"
// #define pathio "E:/Develop/C-CPP/GNU-Compiler/In-Out/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

using namespace std;

// long long int reversDigits(long long int num)
// {
// 	long long int rev_num = 0;
// 	while (num > 0)
// 	{
// 		rev_num = rev_num * 10 + num % 10;
// 		num = num / 10;
// 	}
// 	return rev_num;
// }

int mod(string num, int a)
{
	int res = 0;

	for (int i = 0; i < num.length(); i++)
		res = (res * 10 + (int)num[i] - '0') % a;

	return res;
}

string findSum(string str1, string str2)
{
	// Before proceeding further, make sure length
	// of str2 is larger.
	if (str1.length() > str2.length())
		swap(str1, str2);

	// Take an empty string for storing result
	string str = "";

	// Calculate length of both string
	int n1 = str1.length(), n2 = str2.length();
	int diff = n2 - n1;

	// Initially take carry zero
	int carry = 0;

	// Traverse from end of both strings
	for (int i = n1 - 1; i >= 0; i--)
	{
		// Do school mathematics, compute sum of
		// current digits and carry
		int sum = ((str1[i] - '0') +
				   (str2[i + diff] - '0') +
				   carry);
		str.push_back(sum % 10 + '0');
		carry = sum / 10;
	}

	// Add remaining digits of str2[]
	for (int i = n2 - n1 - 1; i >= 0; i--)
	{
		int sum = ((str2[i] - '0') + carry);
		str.push_back(sum % 10 + '0');
		carry = sum / 10;
	}

	// Add remaining carry
	if (carry)
		str.push_back(carry + '0');

	// reverse resultant string
	reverse(str.begin(), str.end());

	return str;
}

string reverseStr(string str)
{
	int n = str.length();

	for (int i = 0; i < n / 2; i++)
		swap(str[i], str[n - i - 1]);

	return str;
}

void solve(string x)
{
	int countLoop = 1000;
	string temp = x;
	if (mod(x, 7) == 0)
	{
		cout << x;
	}
	else
	{
		while (countLoop--)
		{
			string revStr = reverseStr(x);
			x = findSum(x, revStr);
			if (mod(x, 7) == 0)
			{
				cout << x;
				return;
			}
		}
		cout << temp;
		return;
	}
}

int main()
{
	// freopen(lfi);
	// freopen(lfo);
	// // ios_base :: sync_with_stdio (0);
	// cin.tie(0);

	long long int n;
	cin >> n;
	// long long int arr[n + 5];
	string x;
	while (n--)
	{
		cin >> x;
		solve(x);
		cout << endl;
	}
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}