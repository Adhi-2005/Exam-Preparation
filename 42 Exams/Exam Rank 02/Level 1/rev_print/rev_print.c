#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return(i);
}
void	rev_print(char	*str)
{
	int	i;

	i = ft_strlen(str);
	i--;
	while (str[i])
	{
		write (1, &str[i], 1);
		i--;
	}
	write (1, "\n", 1);
}

int	main(void)
{
	char	str[] = "hey adhil";

	rev_print(str);
}