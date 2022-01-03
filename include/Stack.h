#ifndef __$__stack_h
#define __$__stack_h 235

struct __$__StackNode 
{
void *data;
struct __$__StackNode *next;
};
typedef struct __$__Stack
{
struct __$__StackNode *top;
int elementSize;
int totalSize;
}Stack;

Stack *createStack(int elementSize);
void pushInStack(Stack *stack,void *data,int *errorCode);
void popFromStack(Stack *stack,void *data,int *errorCode);
int isEmpty(Stack *stack,int *errorCode);
int getSizeOfStack(Stack *stack,int *errorCode);
void clearStack(Stack *stack,int *errorCode);
void releaseStack(Stack *stack,int *errorCode);
#endif