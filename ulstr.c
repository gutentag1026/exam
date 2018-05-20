#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i;
		char l;

		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >='a' && argv[1][i] <= 'z')
		  		l = argv[1][i] - ('a' -'A');
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				l = argv[1][i] + ('a'- 'A');
			else 
				l = argv[1][i];
			write(1,&l,1);
			i++;
		}
	}
	write(1,"\n",1);
	return (0);
}
