#include <iostream>
using namespace std;

int main()
{
	int cur = 1, last = 2, sec_last = 3, sum = 0;
	do
	{
		cout << "Enter a number: -1 to exit" << endl;
		cin >> cur;
		if (cur == last && last == sec_last)
		{
			cout << "The sum is: " << sum;
			break;
		}
		sum = sum + cur; sec_last = last; last = cur;
	} while (1);
}