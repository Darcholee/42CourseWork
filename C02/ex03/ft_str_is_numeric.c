#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
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
    char string[] = "0123";
    
    ft_str_is_alpha(string);
}
