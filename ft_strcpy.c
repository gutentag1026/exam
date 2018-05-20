#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int i;
	i = 0;

	while(s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return(s1);
}
/*
int		main()
{
	char *s1 = "abcd";
	char *s2 = "hijklmnopq";
	the above declaration is wrong
	*The difference here is that
	*
	* char *s = "Hello world";
	* will place "Hello world" in the read-only parts of the memory, and making s a pointer to that makes any writing operation on this memory illegal.
	*
	*While doing:
	*
	*char s[] = "Hello world";
	*puts the literal string in read-only memory and copies the string to newly allocated memory on the stack. Thus making
	*
	*s[0] = 'J';
	*legal. 
	char s1[] = "abcd";
	char s2[] = "hijklmnopq";
	printf("%s\n",ft_strcpy(s1,s2));
	return (0);
}
*/

void	 test(char str[])
{

	str[4] = 'y';
	str[5] = 'z';
	str[6] = '\0';
}

int		main()
{

	char s1[] = "abcd";
//	char s2[] = "def";

	
	s1[5] = 'y';
	//test(s1);
	printf("%s\n", s1);


	return (0);
}
