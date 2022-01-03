typedef struct List
{
struct iListNode *istart;
struct iListNode *iend;

struct cListNode *cstart;
struct cListNode *cend;

struct fListNode *fstart;
struct fListNode *fend;

int size;
int isize;
int csize;
int fsize;
}List;

typedef struct iListNode
{
int data;
struct iListNode *next;
}iNode;


typedef struct cListNode
{
char data;
struct cListNode *next;
}cNode;


typedef struct fListNode
{
float data;
struct fListNode *next;
}fNode;

void initList(List* list);
void iput(List *list,int data);
void cput(List *list,char data);
void fput(List *list,float data);
void iremove(List *list,int data);
void cremove(List *list,char data);
void fremove(List *list,float data);
void iget(List *list);
void cget(List *list);
void fget(List *list);
int getSize(List *list);
int igetValueAtIndex(List *list,int index);
char cgetValueAtIndex(List *list,int index);
float fgetValueAtIndex(List *list,int index);
int isize(List *list);
int csize(List *list);
int fsize(List *list);
void getAll(List *list);