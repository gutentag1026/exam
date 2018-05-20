#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int 	main (int argc, char **argv)
{
	int nb1;
	int nb2;
	int result;

	result = 0;
	if (argc == 4)
	{
		nb1 = atoi(argv[1]);//do not put this outside argc == 4, it will try to reach sth tht doesnt exit if argc == 1
		nb2 = atoi(argv[3]);
		if (*argv[2] == '+')
			result = nb1 + nb2;
		else if (*argv[2] == '-')
			result = nb1 - nb2;
		else if (*argv[2] == '*')
			result = nb1 * nb2;
		else if (*argv[2] == '/')
			result = nb1 / nb2;
		else if (*argv[2] == '%')
			result = nb1 % nb2;
		printf("%d\n",result);
	}
	else
		write(1,"\n",1);
	return (0);
}
