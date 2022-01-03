#include<stddef.h>
typedef struct __queue_Node
{ 
 void *data; 
 struct __queue_Node *next;
}QueueNode;
typedef struct __queue
{
 QueueNode *start;
 QueueNode *end;
 int size;
 size_t memSize;
}Queue;
void initQueue(Queue *queue,size_t memSize);
int isQueueEmpty(Queue *queue);
int addToQueue(Queue *queue,const void *num);
void removeFromQueue(Queue *queue,void *data);
void clearQueue(Queue *queue);