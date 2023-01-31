#include<stdio.h>
#include<string.h>
void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);
 int main()
{
  char s[30], t[20];
  char *found;
  }
void input_string(char* a, char* b);
  puts("Enter the first string: ");
  gets(s);
  puts("Enter the string to be searched: ");
  gets(t);
  found=strstr(s,t);
  if(found)
    printf("Second String is found in the First String at %d position.\n",found-s);
   else
    printf("-1");
  return 0;
}