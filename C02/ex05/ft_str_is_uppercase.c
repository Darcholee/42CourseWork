#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    while (*str)
    {
        if (*str < 'A' || *str > 'Z')
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
    char string[] = "ABCD";
    
    ft_str_is_uppercase(string);
}
