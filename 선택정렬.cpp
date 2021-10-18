#include <stdio.h>
void Swap(int* pa, int* pb)
{
	int temp = *pa; // temporary 의 약자
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

int main()
{
	int list[10] = { 80,20,70,50,60,90,40,30 };
	int size = 8;

	PrintList(list, size); // 배열의 시작주소 원소의 갯수
	{
		for (int i = 0; i < size - 1; ++i)
		{
			int min = Min(list, i, size - 1);
			Swap(&list[i], &list[min]);
		}
	}

	PrintList(list, size);
	return 0;
}
