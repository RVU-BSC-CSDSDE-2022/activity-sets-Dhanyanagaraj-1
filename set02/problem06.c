#include <stdio.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main()
{
  char str[100], str_rev[100];
    input_string(str);
    str_reverse(str, str_rev);
    output(str, str_rev);
    return 0;
}

void input_string(char *a)
{
  
  printf("Enter a string:\n");
  scanf("%s",a);
}

void str_reverse(char *str, char *rev_str)
{
  int i=0, j=0, len=0;
  for(i = 0; str[i]!='\0'; i++);
  len = i;
  for(int i = len-1; i>=0; i--)
  {
      rev_str[j] = str[i];
      j++;
    }
  
  rev_str[j]='\0';
}
void output(char *a, char *reverse_a)
{
  printf("Normal string: %s\n",a);
  printf("Reversed string: %s\n",reverse_a);
}