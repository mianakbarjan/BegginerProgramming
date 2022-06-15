#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int roll()
{
	int num1, num2;
	srand(time(0));
	num1 = (1 + rand()&6);
	num2= (1 + rand() & 6);
	return num1 + num2;
}
int main()
{
	enum Game { WIN, LOSE, CONTINUE };
	Game Gamestat;
	int x, point = 0;
	x = roll();
	switch (x) {
	case 7:
	case 11: {
		Gamestat = WIN;
		cout << "Won";
		break;
	}
	case 2:
	case 3:
	case 12: {
		Gamestat = LOSE;
		cout << "lost";
		break;
	}
	case 4:
	case 5:
	case 6:
	case 8:
	case 9:
	case 10: {
		Gamestat = CONTINUE;
		point = x;
		break;
	}
	}
	while (Gamestat == CONTINUE)
	{
		x = roll();
			if (point == x)
			{
				Gamestat = WIN;
			}
			else if (x == 7)
				Gamestat = LOSE;
	}





	return 0;
}