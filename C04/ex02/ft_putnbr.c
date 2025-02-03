#include <stdio.h>
#include <unistd.h>

void ft_putnbr(int nb)
{
    char c;
    
    if (nb < 0)  // Handle negative numbers
    {
        write(1, "-", 1);
        nb = -nb;
    }

    if (nb >= 10)  // Recursively process all but last digit
        {
        ft_putnbr(nb / 10);
        }
    
    c = (nb % 10) + '0';  // Convert last digit to char
    write(1, &c, 1);
}

int main(void)
{
    int nb = 12345;
    
    ft_putnbr(nb);
}
