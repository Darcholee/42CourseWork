#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     ft_strcmp(char *s1, char *s2)
{
    int i;
    int r;
    
    i = 0;
    while (s1[i] || s2[i])
    {
        r = s1[i] - s2[i];
        if (r != 0)
            return (r);
        i++;
    }
    return (0);
}

void    ft_swap(int ac, char **av)
{
    int i;
    int j;
    char *swapper;
    
    i = 1;
    while (i < ac -1)
    {
        j = i + 1;
        while (j < ac)
        {
            if (ft_strcmp(av[i], av[j]) >0)
            {
                swapper = av[i];
                av[i] = av[j];
                av[j] = swapper;
            }
            j++;
        }
        i++;
    }
}

int main(int ac, char **av)
{
    int i;
    int j;
    
    ft_swap(ac, av);
    i = 1;
    while (i < ac)
    {
        j = 0;
        while (av[i][j])
        {
            ft_putchar(av[i][j]);
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}
