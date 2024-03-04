#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac > 1)
	{
		i = 1;
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				if (av[i][j] != ' ')
				{
					if (av[i][j] >= 'a' && av[i][j] <= 'z')
						av[i][j] -= 32;
					j++;
					while (av[i][j] && av[i][j] != ' ')
					{
						if (av[i][j] >= 'A' && av[i][j] <= 'Z')
							av[i][j] += 32;
						j++;
					}
				}
				else
					j++;
			}
			i++;
		}
		i = 1;
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				write (1, &av[i][j], 1);
				j++;
			}
			i++;
			if (av[1][j])
				write (1, " ", 1);
		}
	}
	write (1, "\n", 1);
}
