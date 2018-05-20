#include <stdio.h>
#include <unistd.h>

int ft_space(char c)//pass int c, not char c
{
	return (c == '\t' || c == ' ');
}	

int 	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while(ft_space(argv[1][i]))
			i++;
		while(argv[1][i] && !ft_space(argv[1][i]))
			write(1,&argv[1][i++],1);
	}
	write(1,"\n",1);//new line 
	return (0);
}
