#include <stdio.h>

 unsigned int    lcm(unsigned int a, unsigned int b)
{
	int i;
	int j;

	i = a;
	j = b;
	if (a < b)
	{
		while (a % b != 0)
			a += i;
		return (a);
	}
	else if (a > b)
	{
		while (b % a != 0)
			b += j;
		return (b);
	}
	else
		return (a);
	return (0);
}

int main()
{
	int i;
	int j;

	i = 12;
	j = 80;
	printf("%d\n",lcm(i,j));
	return (0);
}
