#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int r;
    
    if ((n == 0 ) || (s1[0] == '\0' && s2[0] == '\0'))
    {return (0);}

    if (s1[0] == '\0')
    {return (-1);}

    if (s2[0] == '\0')
    {return (1);}

    while(n > 0 && *s1 && *s2)
    {
        r = *s1 - *s2;
        
        if (r == 0)
        {
            s1++;
            s2++;
        }
        else if (r > 0)
        {
            return (1);
        }
        else if (r < 0)
        {
            return (-1);
        }
        n--;
    }
    return (0);
}





/*
int main(void)
{
    char str1[] = "abddcdcdh";
    char str2[] = "abddcdcdv";
    int n = 5;
    
    ft_strncmp(str1, str2, n);
}
*/
