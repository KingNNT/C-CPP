/**/
/* Code by KingNNT */
#include <bits/stdc++.h>

#define pathio "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/In-Out/"
// #define pathio "E:/Develop/C-CPP/GNU-Compiler/In-Out/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

using namespace std;

bool checkLeapYear(int year)
{
	if (((year % 4) == 0) && ((year % 100) != 0))
	{
		return true;
	}
	else if ((year % 400) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool validateDay(int day, int month, int year)
{
	int dayFeb = 28;
	if (checkLeapYear(year))
		dayFeb = 29;
	if ((month == 2) && (day > 0) && (day <= dayFeb))
	{
		return true;
	}
	if ((
			(month == 1) ||
			(month == 3) ||
			(month == 5) ||
			(month == 7) ||
			(month == 8) ||
			(month == 10) ||
			(month == 12)) &&
		((day >= 1) && (day <= 31)))
	{
		return true;
	}
	if ((
			(month == 4) ||
			(month == 6) ||
			(month == 9) ||
			(month == 11)) &&
		((day >= 1) && (day <= 30)))
	{
		return true;
	}
	return false;
}

bool validateMonth(int month)
{
	return ((month >= 1) && (month <= 12));
}

bool validateYear(int year)
{

	return ((year >= 0) && (year < 10000));
}

const string getday(int day, int month, int year)
{
	int JMD;
	JMD = (day + ((153 * (month + 12 * ((14 - month) / 12) - 3) + 2) / 5) + (365 * (year + 4800 - ((14 - month) / 12))) + ((year + 4800 - ((14 - month) / 12)) / 4) - ((year + 4800 - ((14 - month) / 12)) / 100) + ((year + 4800 - ((14 - month) / 12)) / 400) - 32045) % 7;

	const string weekday[] = {"Monday", "Tuesrday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	return weekday[JMD];
}

int main()
{
	freopen(lfi);
	freopen(lfo);
	// ios_base :: sync_with_stdio (0);
	cin.tie(0);

	int day, month, year;
	cin >> day >> month >> year;
	if (validateDay(day, month, year) && validateMonth(month) && validateYear(year))
	{
		cout << getday(day, month, year);
	}

	fclose(stdin);
	fclose(stdout);
	return 0;
}