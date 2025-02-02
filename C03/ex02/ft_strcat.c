#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    while (*dest)
    {
        dest++;
    }
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return (dest);
}
/*
int main(void)
{
    char source[] = "012345";
    char destination[] = "words";
    
    ft_strcat(destination, source);
    
    printf("%s\n", destination);
    return (0);
    
}
*/
