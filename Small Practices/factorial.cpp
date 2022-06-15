//factorial

#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int x, i, fact=1;
	cout << "Enter number for factorial: ";
	cin >> x;
	cout << endl;
	for (i = x; i >= 1; i--)
	{
		fact *= i;
	}
	cout << "The factorial of " << x << " is " << fact;
	cout << endl;


	system("pause");
	return 0;
}
