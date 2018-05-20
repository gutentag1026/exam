#include <stdio.h>
/*correct version : gfedcba*/
char *ft_strrev(char *str)
{
	char	tmp;
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (str[size])
		size++;
	size--;
	while (i < size)
	{
		tmp = str[size];
		str[size] = str[i];
		str[i] = tmp;
		i++;
		size--;
	}
	return (str);
}
/*wrong version: abcdcba

char    *ft_strrev(char *str)
{
	int i;
	int len;

	i = 0;
	while(str[i])
		i++;
	i--;
	len = i;
	i = 0;
	while(len >= 0)
	{
		str[len] = str[i];
		len--;
		i++;
	}
	return (str);
}
*/
int	main()
{
	char str[] = "abcdefg";
	printf("%s\n",ft_strrev(str));
	return (0);
}
