#include <unistd.h>
#include <stdio.h>

void print_bits(unsigned char octet)
{
	int o;
	int mod;
	char s[8];
	int i;

	i = 0;
	mod = 0;
	o = (int)(unsigned char)octet;
	while (i < 8)
	{
		s[i] = '0';
		i++;
	}
	i = 7;
	while (o != 0)
	{
		mod  =  o % 2 + '0';
		s[i] = mod;
		o = o / 2;
		i--;
	}
	write(1,&s[0],8);
}

int main()
{
  unsigned char o = 13;
  print_bits(o);
  return (0);
}

