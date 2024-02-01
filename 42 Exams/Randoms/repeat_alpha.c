#include <unistd.h>

void	special_putchar(int	c, int	i)
{
	while (i > 0)
	{
		write (1, &c, 1);
		i--;
	}
}

void	repeat_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			special_putchar(str[i], str[i] + 1 - 'a');
		else if (str[i] >= 'A' && str[i] <= 'Z')
			special_putchar(str[i], str[i] + 1 - 'A');
		else
			write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	main(void)
{
	repeat_alpha("Helo");
}
