#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    int i;
    while (*dest)
    {   
        dest++;
    }
    while (*src)
    {
        if (i < size -1)
        {
            *dest = *src;
        }
        dest++;
        i++;
        src++;
    }
    dest = '\0';
}
/*
int main(void)
{
    char destination[] = "abcdef";
    char source[] = "12345";
    
    int size = 11;
    
    ft_strlcat(destination, source, size);
    
    printf("%s\n", destination);
}
*/
