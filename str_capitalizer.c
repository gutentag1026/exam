#include <unistd.h>
#include <stdio.h>

int		check(char *str, int i)
{
	if (i == 0)
		return (1);
	else
	{
		if (*(str - 1) == '\t' || *(str - 1) == ' ')
			return(1);
		else
			return(0);
	}
	return(0);
}
void	str_capitalizer(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && 'Z' >= str[i])
			str[i] += 32;
		if ((str[i] >= 'a' && 'z' >= str[i]) && check(&str[i], i))
			str[i] -= 32;
		write(1, &str[i++], 1);
	}
}
int		main(int argc, char *argv[])
{
	int		i;

	if (argc < 2)
		write (1, "\n", 1);
	else
	{
		i = 1;
		while (i < argc)
		{
			str_capitalizer(argv[i]);
			write(1, "\n", 1);
			i += 1;
		}
	}
	return (0);
}
