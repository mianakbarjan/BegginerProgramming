#include <iostream>
using namespace std;
int main()
{
	long a, b, i, min, hcf=1;
	cout << "enter first number: ";
	cin >> a;
	cout << endl << "enter second number: ";
	cin >> b;
	if (a < b)
	{
		min = a;
	}
	else if (b < a)
	{
		min = b;
	}
	for (i = 1; i <= min; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			hcf = i;
		}
	}
	cout << hcf;

	return 0;
}