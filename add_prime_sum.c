#include <unistd.h>
#include <stdio.h>

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

void ft_putnbr(int nbr)
{
	char c;

	if (nbr < 0 )
	{
		write(1,"-",1);
		nbr = -nbr;
	}
	if (nbr < 10)
	{
		c = nbr + '0';
		write(1,&c,1);
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

int is_prime(int c)
{
  
    int n;
  
    n = c;
    while(n--)
    {
      if (c % n == 0)
        break;
    }
    
    if (n > 1)
      return (0);
    else
      return (1);
}

int main(int argc, char **argv)
{
  if (argc != 2)
    write(1,"0",1);
  else
  {
    int nbr;
	int sum;

    nbr = ft_atoi(argv[1]);
	sum = 0;    
    while(nbr > 1)
    {
      if (is_prime(nbr))
         sum += nbr;
         nbr--;
    }
    ft_putnbr(sum);
    write(1,"\n",1);
  }
 }
