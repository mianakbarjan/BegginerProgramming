#include <iostream>
using namespace std;
int main()
{
	int a, b;
	char operation;
	cout << "enter a: ";
	cin >> a;
	cout << "enter b";
	cin >> b;
	cout << "enter operation:";
	cin >> operation;
	switch (operation) 
	{
	case '+':
		cout << "a+b= " << a + b;
		break;
	case '-':
		cout << "a-b= " << a - b;
		break;
	case '*':
		cout << "a*b= " << a * b;
		break;
	case '/':
		cout << "a/b= " << a / b;
		break;
	case '%':
		cout << "a%b= " << a % b;
		break;
	default:
		cout << "enter either +, -, *, /, %";
	}

	return 0;
}
