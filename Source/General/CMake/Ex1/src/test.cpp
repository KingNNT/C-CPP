/**/
/* Code by KingNNT */



/* Include File */
#include <bits/stdc++.h>
// #include ""

/* Define */

#define pathio "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/In-Out/"
// #define pathio "E:/Develop/C-CPP/GNU-Compiler/In-Out/"
#define lfi pathio"input.txt"
#define lfo pathio"output.txt"

using namespace std;



int main()
{
	ifstream fi;
	ofstream fo;
	if (fi.fail() || fo.fail())
	{
		cout << "ERROR";
		return -1;
	}
	else
	{
		fi.open(lfi, fi.in);
		fo.open(lfo, fo.out);
	}
	// use "fi >> " to read from file
	// use "fo << " to write to file
	// ios_base :: sync_with_stdio (0);
	cin.tie(0);

	

	fclose(stdin);
	fclose(stdout);
	return 0;
}