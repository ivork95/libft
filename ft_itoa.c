#include "libft.h"

char *ft_convnum(char *s, int n, int x)
{
	int i;

	i = 0;
	if (n == 0)
		s[0] = '0';
	if (n < 0)
	{
		n *= -1;
		s[i] = '-';
	}
	i = i + x - 1;
	while (n > 0)
	{
		s[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	s[x] = '\0';
	return (s);
}

char *ft_itoa(int n)
{
	int x;
	int count;
	char *str;

	x = n;
	count = 0;
	if (n <= 0)
	{
		x *= -1;
		count++;
	}
	while (x > 0)
	{
		x = x / 10;
		count++;
	}
	str = malloc(sizeof(char) * count + 1);
	if (str == NULL)
		return(str);
	return(ft_convnum(str, n, count));
}

int main()
{
	char *str;

	str = ft_itoa(-1);
	printf("%s\n", str);
	return (0);
}