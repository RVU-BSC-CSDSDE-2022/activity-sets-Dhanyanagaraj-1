#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() 
{
    char name[100];
    input(name);
    int res = has_nice_name(name);
    output(res);
    return 0;
}


void input(char *name) 
{
    printf("Enter the name of the camel: ");
    scanf("%s", name);
}

int has_nice_name(char *name)
{
    int vowels = 0, consonants = 0;

    for (int i = 0; i < strlen(name); i++) 
    {
        char ch = tolower(name[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } else if (isalpha(ch))
        
      {
            consonants++;
        }
    }

    return (vowels >= 2 && consonants >= 2);
}

void output(int res) 
{
    if (res) 
    {
        printf("The camel has a nice name.\n");
    } else 
    {
        printf("The camel does not have a nice name.\n");
    }
}

