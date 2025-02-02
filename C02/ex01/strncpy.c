#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    while (n > 0)
    {
        *dest = *src;
        src++;
        dest++;
        n--;
    }
    *dest = '\0';
}

int main(void)
{
    char source[] = "abcdef";
    char destination[] = "012345";
    int n = 3;
    
    ft_strncpy(destination, source, n);
    
    printf("%s\n", destination);
}
