int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (*str)
    {
        str++;
        i++;
    }
    return (i);
}
/*
int main(void)
{
    char string[] = "abcdef";
    
    ft_strlen(string);
}
*/
