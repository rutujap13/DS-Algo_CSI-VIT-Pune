#include<stdio.h>


void removeSpaces(char *str)
{
    int space = 0;
    for (int i = 0; str[i]; i++)
        if (str[i] != 32)//ascii value for space
            {str[space] = str[i];
            space++;}
    str[space] = '\0';
}

int main()
{
    char str[] = "h ow are y ou";
    removeSpaces(str);
    printf("%s",str);
    return 0;
}
