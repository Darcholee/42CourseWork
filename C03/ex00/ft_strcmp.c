#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int r;

        if (*s1 == '\0' && *s2 == '\0')
    {
        return (0);
    }
    
    while(*s1 || *s2)
    {
        r = *s1 - *s2;
        //printf("%d", r);
        
        if (r == 0)
        {
            s1++;
            s2++;
        }
        else if (r > 0)
        {
            //printf("\n%d\n", 1);
            return (r);
        }
        else if (r < 0)
        {
            //printf("\n%d\n", -1);
            return (r);
        }

    }
    //printf("\n%d\n", 0);
    return (r);
}
/*
int main(void)
{
    char str1[] = "abdd";
    char str2[] = "abdd";
    
    ft_strcmp(str1, str2);
}
*/
