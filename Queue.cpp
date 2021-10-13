#include <stdlib.h>
#include "Queue.h"
// ¼­¹ö(Queue)
void Push(Queue* q, int data)
{
	if ((q->rear + 1) % q->capacity == q->front)
		return;

	q->rear = (q->rear + 1) % q->capacity;
	q->queue[q->rear] = data;
}
int Pop(Queue* q)
{
	if (q->front == q->rear)
		return 0xfffffff;
	 
	q->front = (q->front + 1) % 5;
	return q->queue[q->front];
}
void InitQueue(Queue* q, int cap)
{
	q->queue = (int*)malloc(sizeof(int) * cap);
	q->capacity = cap;
	q->front = q->rear = 0;
}
void UninitQueue(Queue* q)
{
	free(q->queue);
	q->front = q->rear = 0;
}