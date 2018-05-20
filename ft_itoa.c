#include <stdlib.h>
#include <stdio.h>
char	*ft_itoa(int nbr)
{
	int len;
	int nb;
	char *str;
	char sign;

	len = 0;
	sign = 0;
	nb = nbr;
	if (nb < 0)
	{
		len++;
		nb = -1 * nb;
		sign = 1;
	}
	while(nbr)
	{
		nbr /= 10;
		len++;
	}
	if (!(str = ((char *)malloc(sizeof(char)*len + 1))))
		return (NULL);
	str[len] = '\0';
	if (sign == 1)
		str[0] = '-';
	len = len - 1;
	while(nb && (len >=0))
	{
		str[len] = nb % 10 + '0';
		nb = nb / 10;
		len--;
	}
	return (str);
}

int 	main()
{
	int i;

	i = -123;
	printf("%s\n",ft_itoa(i));
	return (0);
}


