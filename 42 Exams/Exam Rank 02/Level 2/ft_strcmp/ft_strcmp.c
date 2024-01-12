

// Standard Way...


// int	ft_strcmp(char *s1, char *s2)
// {
// 	while (*s1 && *s2)
// 	{
// 		if (*s1 > *s2)
// 			return (1);
// 		else if(*s1 < *s2)
// 			return (-1);
// 		s1++;
// 		s2++;
// 	}
// 	return (0);
// }



// Normal Exam Way....(It just return the difference in the ascci value between the first different occurence).......


int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>

int	main(void)
{
	char	s1[] = "hey Adhil";
	char	s2[] = "Hey Adhil";
	int	result;

	result = ft_strcmp(s1, s2);
	printf("%d\n", result);
}