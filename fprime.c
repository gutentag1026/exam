#include <stdio.h>
#include <unistd.h>
int ft_atoi(char *s)
{
  int i;
  int sign;
  int nbr;


  i = 0;
  sign = 1;
  nbr = 0;
  while (s[i] == '\t' || s[i] == '\v' || s[i] == ' ' || s[i] == '\f' || s[i] == '\r' || s[i] == '\n')
    i++;
  if (s[i] == '-')
    sign = -1;
  if (s[i] == '-' || s[i] == '+')
    i++;
  while (s[i] >= '0' && s[i] <= '9')
  {
    nbr = nbr * 10 + s[i] - '0';
    i++;
  }
   return (sign * nbr);

}

int main(int argc, char **argv)
{
	int nbr;
	int i;

	nbr = ft_atoi(argv[1]);
	if (argc == 2)
	{
		i = 2;
		while (nbr >= i)
		{
			if (nbr % i == 0)
			{
				nbr = nbr / i ;
				printf("%d", i);
				if (nbr == i)
					break;
				printf("*");
				i = 1;
			}
				i ++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
