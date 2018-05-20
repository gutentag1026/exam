#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		write(1,"-",1);
		nbr = -nbr;
	}
	if (nbr >= 0 && nbr <= 9)
	{
		nbr = nbr + '0';
		write(1,&nbr,1);
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

int main()
{
	int n = 4234;
	printf("%d ", n);
	return (0);
}
