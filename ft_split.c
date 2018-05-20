#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char		**ft_split(char *str)
{
	int i;
	int j;
	int k;
	char **split;

	i = 0;
	j = 0;
	k = 0;
	if (!(split = (char **)malloc(sizeof(char *) * 100)))//allocating 100 address, char *,malloc returns a pointer to a pointer to address
		return (NULL);
	while(str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
		i++;
	while(str[i])
	{
		j = 0;
		if (!(split[k] = (char *)malloc(sizeof(char)*100)))
			return (NULL);
		while(str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
		{
			split[k][j] = str[i];
			j++;
			i++;
		}	
		while(str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
			i++;
		split[k][j] = '\0';	
		k++;
	}
	split[k] = NULL;
	return (split);
}

int		main()
{
	char s[] = "  abc d efg ";
	char **strings = ft_split(s);
	int i = 0;

	while (strings[i])
	{
		printf("%s\n", strings[i]);
		i++;
	}
	return (0);
}
