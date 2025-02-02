#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int r;
    
    while (*str)
    {
        r = *str - *to_find;
        
        if (r == 0)
        {
            str++;
            to_find++;
        }
        else if (r < 0 || r > 0)
        {
           *str = '*';
           str++;         
        }
    }
        return (str);
}
/*
int main(void)
{
    char string[] = "abcdefHELPghijk";
    char to_look[] = "HELP";
    
    ft_strstr(string, to_look);
    printf("%s\n", string);
}
*/
