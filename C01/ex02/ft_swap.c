#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int cat;

	cat = *a;
	*a = *b;
	*b = cat;
}
