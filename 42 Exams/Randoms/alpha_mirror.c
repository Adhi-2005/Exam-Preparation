#include <unistd.h>

void	alpha_mirror(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = 'z' - str[i] + 'a';
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = 'Z' - str[i] + 'A';
		write (1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char	str[] = "cba";

	alpha_mirror(str);
	write (1, "\n", 1);
	return (0);
}