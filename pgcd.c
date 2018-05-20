#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	int nbr1;
	int nbr2;
	if (argc != 3)
	{
		write(1,"\n",1);
		return (0);
	}
	nbr1 = atoi(&argv[1][0]);
	nbr2 = atoi(&argv[2][0]);
	while (1)
	{
		if (nbr1 > nbr2)
			nbr1 -= nbr2;
		else if (nbr1 < nbr2)
			nbr2 -= nbr1;
		else
		{
			printf("%d\n", nbr1);
			return (0);
		}
	}
	return (0);
}
