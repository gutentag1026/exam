#include <unistd.h>
#include <stdio.h>
/*
int main()
{
	int i;

	i = 0;
	char s1[] = "abcd";
	while(s1[i])
	{
		printf("%d\n",i);
		printf("%p\n",s1);
		i++;
		
	}
	return (0);
}
*/
int main()
{
	char union[259];
	printf("%c",union['a']);
	return (0);
}
