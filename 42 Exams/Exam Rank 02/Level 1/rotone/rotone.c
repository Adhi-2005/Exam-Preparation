#include <unistd.h>

void	rotone(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
			str[i] += 1;
		else if (str[i] >= 'z' || str[i] <= 'Z')
			str[i] -= 25;
		write(1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	main(void)
{
	char	str[] = "z";

	rotone(str);
}