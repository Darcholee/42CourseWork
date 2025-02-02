#include <stdio.h>

int ft_str_is_printable(char *str)
{
    while (*str)
    {
        if (*str < ' ' || *str > '~')
        {
            printf("%d\n", 0);
            return (0);
        }
        *str++;
    }
    printf("%d\n", 1);
    return (1);
}

int main(void)
{
    char string[] = " !#$";
    
    ft_str_is_printable(string);
}
