
void 	ft_ultimate_div_mod(int *a, int *b)
{
	int store_a;
	int store_b;

	store_a = *a / *b;
	store_b = *a % *b;

	*a = store_a;
	*b = store_b;
}
