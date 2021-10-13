#pragma once
typedef struct q_
{
	int* queue;
	int front, rear;
	int capacity;
} Queue; 
// ¼­¹ö(Queue)

void Push(Queue* q, int data);
int Pop(Queue* q);
void InitQueue(Queue* q, int cap);
void UninitQueue(Queue* q);