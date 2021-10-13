#include <stdio.h> // 이진검색
int _BinSearch(int arr[], int left, int right, int data)
{
	if (left <= right)
	{
		int middle = (left + right) / 2;
		if (data < arr[middle])
			return _BinSearch(arr, left, right - 1, data);
		else if (data > arr[middle])
			return _BinSearch(arr, left + 1, right, data);
		else
			return middle;
	}
}

int BinSearch(int arr[], int size, int data)
{
	return _BinSearch(arr, 0, size - 1, data);
}
int main()
{
	int arr[10] = { 10, 35, 45, 48, 50, 57, 69, 72, 83, 96 };
	int size = 10;

	int idx = BinSearch(arr, size, 48);
	if (idx != -1)
		printf("[%d] : %d\n", idx, arr[idx]);
}