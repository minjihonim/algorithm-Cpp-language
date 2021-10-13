#include <stdio.h>
#include "Queue.h"
int main()
{
	Queue q;

	InitQueue(&q, 100);
	Push(&q, 10);
	Push(&q, 20);
	Push(&q, 30);
	Push(&q, 40);
	Push(&q, 50);

	printf("queue : %d\n", Pop(&q));
	printf("queue : %d\n", Pop(&q));
	printf("queue : %d\n", Pop(&q));
	printf("queue : %d\n", Pop(&q));
	printf("queue : %d\n", Pop(&q));
	UninitQueue(&q);
}