#include <stdio.h>
#include <string.h>
int main() 
{
    char a[1000];
    input_string(a);
    int no_words = count_words(a);
    output(a, no_words);
    return 0;
}
void input_string(char *a) 
{
    printf("Enter a string: ");
    scanf("%s",a)
}

int count_words(char *string)
{
    int count = 0;
    char *token = strtok(string," \t\n");
    while (token != NULL)
    {
        count++;
        token = strtok(NULL, "\t\n");
    }
    return count;
}

void output(char *string, int no_words)
{
    printf("The string \"%s\" contains %d words.\n", string, no_words);
}


