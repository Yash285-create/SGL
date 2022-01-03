#ifndef __$__dictionary_h
#define __$__dictionary_h 440

typedef struct __$__DictionaryNode
{
void *data,*key;
struct __$__DictionaryNode *next;
}DictionaryNode;

typedef struct __$__Dictionary
{
int elementSize,keySize;
DictionaryNode *start,*end;
int totalSize;
}Dictionary;

Dictionary *createDictionary(int elementSize,int keySize);
int sizeOfDictionary(Dictionary *dict);
void addOnDictionary(Dictionary *dict,void *key,void *data,int *errorCode,int (*p2f)(void *,void *));
void *deleteFromDictionary(Dictionary *dict,void *key,int *errorCode,int (*p2f)(void *,void *));
void updateFromDictionary(Dictionary *dict,void *key,void *data,int *errorCode,int (*p2f)(void *,void *));
void *getDataFromDictionary(Dictionary *dict,void *key,int *errorCode,int (*p2f)(void *,void *));
void clearDictionary(Dictionary *dict,int *errorCode);
void releaseDictionary(Dictionary *dict,int *errorCode);
#endif

