#include <stdio.h>
#include <unistd.h>

int iter(char *s, char c, int len)
{
	int i;

	i = 0;
	while (s[i] && (len == -2 || i < len))
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}


int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i;

		i = 0;
		while(argv[1][i])
		{
			if (!iter(argv[1],argv[1][i],i) && iter(argv[2],argv[1][i],-2))
				write(1,&argv[1][i],1);
			i++;
		}
	}
		write(1,"\n",1);
		return (0);
}
