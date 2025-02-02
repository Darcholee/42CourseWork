#include <stdio.h>

char    *ft_strcpy(char *dest, char *src)
{
    while (*src)
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main(void)
{
    char source[] = "abcdef";
    char destination[] = "012345";
    
    ft_strcpy(destination, source);
    
    printf("%s\n", destination);
}
