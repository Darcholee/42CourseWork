#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int x = 1;
    if (nb < 0)
    {
        return (0);
    }
    
    while (nb > 1)
    {
        x = x * nb;
        nb--;
    }
    printf("%d\n", x);
    return (x);
}

int main(void)
{
    int nb;
    
    nb = 7;
    ft_iterative_factorial(nb);
}
