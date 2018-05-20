#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char	*ft_strdup(const char *s1)
{
	char		*p;
	size_t		i;

	i = strlen(s1);
	if (!(p = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	while (*s1)
	{
		*p = *s1;
		p++;
		s1++;
	}
	*p = '\0';
	return (p - i);
}
