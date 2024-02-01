#include <stdio.h>
#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	i;
	int	len;
	int	*num;

	len = abs(end - start);
	num = (int *)malloc(sizeof(int) * len + 1);
	i = 0;
	while (i < len)
	{
		if (start < end)
		{
			num[i] = start;
			start++;
			i++;
		}
		else
		{
			num[i] = start;
			start--;
			i++;
		}
	}
	return (num);
}

int	main(void)
{
	printf("%ls\n", ft_rrange(1, 3));
	return (0);
}