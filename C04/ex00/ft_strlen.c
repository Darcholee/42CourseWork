#include <stdio.h>

int ft_strlen(char *str)
{
    int i;
    while (*str)
    {
        *str++;
        i++;
    }
    printf("%d\n", i);    
    return (i);
}
/*
int main(void)
{
    char string[] = "abcdef";
    
    ft_strlen(string);
}
*/
