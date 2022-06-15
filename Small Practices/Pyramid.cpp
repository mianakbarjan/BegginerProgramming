#include <iostream>
using namespace std;
int main()
{
	int N, i = 0;  //N is number of times we want to repeat, i is the number of rows
	cin >> N;
	while (i < N)
	{
		int j = 0;  //j is the number of columns
		while (j <= i)  
		{
			cout << "*";
			j++;  //increases j by 1
		}
		i++;  //increases i by 1
		cout << endl;

	}
	return 0;
}