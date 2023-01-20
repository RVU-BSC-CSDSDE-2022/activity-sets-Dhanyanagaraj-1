#include <stdio.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main()
{
  char str[100],rev_str[100];
  input_string(str);
  str_reverse(str,rev_str);
  output(str,rev_str);
  return 0;
}

void input_string(char *a)
{
  printf("Enter a string:\n");
  if(scanf("%s",a));
}

void str_reverse(char *str, char *rev_str)
{
  int i=0,j=0,k;
  while(1)
    {
      if(str[i]!='\0')
      {
        j=i;
        break;
      }
      i++;
    }

  for(j=0 ; j<i ; j++)
    {
      rev_str[k]=str[i];
      k++;
    }
  
}

void output(char *a, char *reverse_a)
{
  printf("Normal string: %s\n",a);
  printf("Reversed string: %s\n",reverse_a);
}