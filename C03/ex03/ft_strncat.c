#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int n)
{
    while (*dest)
    {
       dest++;
    }
    while (n > 0 && *src)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }
    *dest = '\0';
    return (dest);
}
/*
int main(void)
{
    char source[] = "01234567890123456789";
    char destination[] = "abcdef";
    int n = 10;
    
    ft_strncat(destination, source, n);
    
    printf("%s\n", destination);
    return (0);
}
*/
