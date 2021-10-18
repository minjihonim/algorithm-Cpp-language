#include<stdio.h>

void Swap(int* pa, int* pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}
void PrintList(int list[], int size)
{
	for (int i = 0; i < size; ++i)
		printf("%5d", list[i]);
	printf("\n");
}
int Min(int list[], int sIndex, int eIndex)
{
	int min = sIndex;
	for (int i = sIndex + 1; i <= eIndex; ++i)
		if (list[min] > list[i])
			min = i;
	return min;
}

void InsertionSort(int list[], int size)
{
	int value, j;
	for (int i = 1; i < size; ++i)
	{
		value = list[i];
		for (j = i - 1;j >= 0; --j)
		{
			if (list[j] > value)
				list[j + 1] = list[j];
			else
				break;
		}
		list[j + 1] = value;
	}
}

int main()
{
	//int list[10] = { 80,20,70,50,60,90,40,30 };
	int list[10] = { 20,50,70,80,10,90,40,30 };
	int size = 8;

	PrintList(list, size);
	InsertionSort(list, size);
	PrintList(list, size);
	return 0;
}