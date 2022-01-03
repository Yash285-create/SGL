#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct stackNode
{
void* data1;
void* data2;
struct stackNode *next;
}stackNode;
typedef struct STACK
{
int size;
int elementSize;
stackNode *top;
}STACK;
void initStack(STACK *stack,int elementSize);
int isEmpty(STACK *stack);
void push(STACK *stack,void* data1,void* data2);
void pop(STACK *stack,void *data1,void *data2);
int findPartitionPoint(void*x,int lb,int ub,int es,int(*p2f)(void*,void*));
void quicksort(void *x,int lowerBound,int upperBound,int es,int(*p2f)(void*,void*));
