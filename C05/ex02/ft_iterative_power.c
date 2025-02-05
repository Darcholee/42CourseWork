#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int	x;
	x = 1;
    if (power < 0)
        return (0);
    if (nb == 0 && power == 0)
        return (1);
    while (power >= 1)
    {
        x *= nb;
        power--;
    }
    nb = x;
    return (nb);
}
/*
int main(void)
    {
        int nb = 5;
        int power = 10;
        
        ft_iterative_power(nb, power);
    }
*/
