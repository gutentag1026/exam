#include <unistd.h>
#include <stdio.h>
/*
int		is_alphabet(char c)
{
	if((c >='a' && c <= 'z') || (c >='A' && c <= 'Z'))
		return (1);
	else
		return (0);
}


int		main(int argc, char **argv)
{
	int j;
	int i;
	int k;

	i = 1;
	k = argc -1;
	while(i <= k)
	{
		j = 0;
		while(argv[i][j])
		{
			if(is_alphabet(argv[i][j]) && ((is_alphabet(argv[i][j+1]))))
			{		
				if(argv[i][j] >= 'A' && argv[i][j] <= 'Z')
					argv[i][j] = argv[i][j] + ('a' - 'A');
			}
			else if(is_alphabet(argv[i][j]) && (!(is_alphabet(argv[i][j+1]))))
			{
				if(argv[i][j] >= 'a' && argv[i][j] <= 'z')
					argv[i][j] = argv[i][j] - ('a' - 'A');
			}
			j++;
		}	
		j = 0;
		while(argv[i][j])
		{
			write(1,&argv[i][j],1);
			j++;
		}
		write(1,"\n",1);
		i++;
	}
}
*/

int		is_last(char *str)
{
	int i;

	i = 0;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		   return (0);
		i++;
	}
	return (1);	
}

void	rstr_capitalizer(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && 'Z' >= str[i])
			str[i] += 32;
		if ((str[i] >= 'a' && 'z' >= str[i]) && is_last(&str[i + 1]))
			str[i] -= 32;
		write(1, &str[i++], 1);
	}
}

int		main(int argc, char *argv[])
{
	int		i;

	if (argc < 1)
		write (1, "\n", 1);
	else
	{
		i = 1;
		while (i < argc)
		{
			rstr_capitalizer(argv[i]);
			write(1, "\n", 1);
			i += 1;
		}
	}
	return (0);
}
