#include <iostream>
using namespace std;
void reversearray(int arr[], int arrsize)
{
	
	for (int i = 0, j = arrsize - 1; i < arrsize, j>=0; i++, j--)
	{
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	for (int k = 0; k < arrsize; k++)
	{
		cout << arr[k] << " ";
	}
}

int main()
{
	const int j = 100;
	int arr[j] = { 0 };
	int arrsize;
	cout << "Enter the size of array: ";
	cin >> arrsize;
	cout << "Enter array elements: ";
	for (int i = 0; i < arrsize; i++)
	{
		cin >> arr[i];
	}
	reversearray(arr, arrsize);
	return 0;

}