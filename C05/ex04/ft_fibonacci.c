#include <stdio.h>

int ft_fibonacci(int index)
{
    int x;
    int y;
    x = 0;
    y = 0;
    if (index < 0)
        return (-1);
    if (index > 0)
    {
    return (x + y) ft_fibonacci(index - 1);
    }
    
}

int main(void)
{
    int index = 5;
    
    ft_fibonacci(index);
}
