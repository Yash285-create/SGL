#ifndef __$__linked_List_h
#define __$__linked_List_h 228
struct __$__SinglyLinkedListNode
{
void *ptr;
struct __$__SinglyLinkedListNode *next;
};
typedef struct __$__SinglyLinkedList
{
struct __$__SinglyLinkedListNode *start,*end;
int totalSize;
int elementSize;
}SinglyLinkedList;

SinglyLinkedList *createSinglyLinkedList(int elementSize);
void addToSinglyLinkedList(SinglyLinkedList *sll,void *ptr,int *errorCode);
void getAll(SinglyLinkedList *sll);
int getSizeOfSinglyLinkedList(SinglyLinkedList *sll);
void *getElementFromSinglyLinkedList(SinglyLinkedList *sll,int index,int *errorCode);
void updateSinglyLinkedList(SinglyLinkedList *sll,int index,void *ptr,int *errorCode);
void *deleteFromSinglyLinkedList(SinglyLinkedList *sll,int index,int *errorCode);
void clearSinglyLinkedList(SinglyLinkedList *sll,int *errorCode);
void releaseSinglyLinkedList(SinglyLinkedList *sll,int *errorCode);
#endif