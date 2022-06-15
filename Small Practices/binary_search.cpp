#include <iostream>
using namespace std;
int bsearch(int arr[], int arr_size,  int start, int end, int x) {
	int m = (start + end) / 2;
	if (start == end && arr[start] != arr[end])
		return -1;
	if (arr[m] == x)
		return m;
	else if (arr[m] < x)
		bsearch(arr, (arr_size - m), start, m - 1, x);
	else
		bsearch(arr, (arr_size-m), m + 1, end, x);

}
int main()
{
	int arr[10], x;
	for (int i = 0; i < 10; i++)
	{
		cout << "enter number: ";
		cin >> arr[i];
		cout << endl;
	}
	cout << "enter number to be found: ";
	cin >> x;
	cout << bsearch(arr, 10, 0, 9, x);
	return 0;
}
