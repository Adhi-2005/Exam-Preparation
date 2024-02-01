#include <unistd.h>

void	pass_arg(char *str, char *r, char *f)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (r[j] && f[j])
		j++;
	if (j != 1)
		return ;
	while (str[i])
	{
		if (str[i] == f[0])
			str[i] = r[0];
		i++;
	}
	i = 0;
	while (str[i])
		write (1, &str[i++], 1);
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		pass_arg(av[1], av[3], av[2]);
	}
	write (1, "\n", 1);
}
