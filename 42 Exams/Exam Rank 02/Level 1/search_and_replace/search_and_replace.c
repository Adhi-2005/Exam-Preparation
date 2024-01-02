// #include <unistd.h>

// int	main(int ac, char **av)
// {
// 	int	i;

// 	i = 0;
// 	if (ac == 4)
// 	{
// 		if (!av[2][1] && !av[3][1])
// 		{
// 			while (av[1][i] && av[2][0])
// 			{
// 				if (av[1][i] == av[2][0])
// 					av[1][i] = av[3][0];
// 				i++;
// 			}
// 			i = 0;
// 			while (av[1][i])
// 			{
// 				write (1, &av[1][i], 1);
// 				i++;
// 			}
// 		}
// 	}
// 	write (1, "\n", 1);
// }



// function way...(which will be asked as string replicate)

#include <unistd.h>

void	strrepli(char *main_str, char *sec_str, char *thir_str)
{
	int	i;

	i = 0;
	while (main_str[i])
	{
		if (main_str[i] == sec_str[0])
			main_str[i] = thir_str[0];
		i++;
	}
	i = 0;
	while (main_str[i])
	{
		write (1, &main_str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	main(void)
{
	char	main_str[] = "Hey Adhil";
	char	sec_str[] = "e";
	char	thir_str[] = "y";

	strrepli(main_str, sec_str, thir_str);
	return (0);
}