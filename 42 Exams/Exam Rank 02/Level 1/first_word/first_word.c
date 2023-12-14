#include <unistd.h>


// Command line arguments way...


int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac > 1)
	{
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while ((av[1][i] != '\t' && av[1][i] != ' ') && av[1][i] != '\0')
		{
			write (1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}


// Function way...


// void	first_word(char	*str)
// {
// 	int	i;

// 	i = 0;

// 	while (str[i] == ' ' && str[i] == '\t')
// 		i++;
// 	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
// 	{
// 		write (1, &str[i], 1);
// 		i++;
// 	}
// 	write (1, "\n", 1);
// }

// int	main(void)
// {
// 	first_word("For Pony");
// 	return (0);
// }