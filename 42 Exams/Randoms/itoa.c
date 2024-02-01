#include <stdio.h>
#include <stdlib.h>

int	ft_numlen(int	n, int	base)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n)
	{
		n /= base;
		len++;
	}
	return (len);
}

char	*ft_itoa(int num)
{
	int			len;
	char		*str;
	const char	*digits;

	digits = "0123456789";
	len = ft_numlen(num, 10);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	str[len] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
		str[0] = '-';
	while (num)
	{
		if (num > 0)
			str[--len] = digits[num %10];
		else
			str[--len] = digits[num % 10 * -1];
		num /= 10;
	}
	return (str);
}

int	main(void)
{
	int	c = -57754;

	printf("%s\n", ft_itoa(c));
	return (0);
}
