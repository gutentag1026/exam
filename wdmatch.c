#include <stdio.h>
#include <unistd.h>


int		main(int argc, char **argv)
{
	int	i;
	int j;
	int k;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[1][i])//don't do this outside argc == 3, if there's no argc, it may tries to reach sth tht doesnlt exit
			i++;
		k = i;
		i = 0;
		while(argv[2][j] && argv[1][i])
		{
			if (argv[1][i] == argv[2][j])
				i++;
			j++;
		}
	if (!argv[1][i])
			//write (1,argv[1],k); 
			write(1,&argv[1][0],k);
	}
	write(1,"\n",1);
	return (0);
}
           
