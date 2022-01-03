typedef struct string
{
char *str;
}string;
int getLength(string *s);
char getValueAtIndex(string *s,int index);
void concatnate(string *a,string *b);
int equals(string *a, string *b);
int equalsIgnoreCase(string *a, string *b);
void strItr(string *s);
void toUpper(string *s);
void toLower(string *s);