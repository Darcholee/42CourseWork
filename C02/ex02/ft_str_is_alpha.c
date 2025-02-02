#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    while (*str)
    {
        if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
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
    char string[] = "abcd";
    
    ft_str_is_alpha(string);
}
