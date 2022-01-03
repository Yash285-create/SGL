#define SUCCESSFUL 1
#define FAILED 0
#define NO_ERROR 0
#define NULL_VALUE 1
#define ELEM_SIZE_ZERO 2
#define MEM_ALLOC_ERROR 3
#define STACK_EMPTY 4
typedef struct __stack_node
{
 void *data;
 struct __stack_node *next;
}StackNode;
typedef struct __stack
{
StackNode *top;
int elementSize;
int size;
}Stack;
void initStack(Stack *stack,int elementSize,int *successful,int *error);
void push(Stack *stack,void *data,int *successful,int *error);
void pop(Stack *stack,void *data,int *successful,int *error);
int isEmpty(Stack *stack,int *successful,int *error);
void merge(void *x,int (*p2f)(void *,void *),int es,int lb1,int ub1,int lb2,int ub2,int *successful,int *error);
void mergeSort(void *x,int (*p2f)(void *,void *),int es,int lowerBound,int upperBound,int *successful,int *error);