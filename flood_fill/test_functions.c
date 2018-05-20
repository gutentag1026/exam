
#include <unistd.h>
#include <stdlib.h>

void	putc(char c)
{
	write(1, &c, 1);
}

char	**make_area(char **area)
{
	int	y;
	int	x;
	int	mapx;
	char	**map;

	y = 0;
	while (area[y])
		y++;
	map = (char **)malloc(sizeof(char *) * (y + 1));
	map[y] = NULL;
	while (--y >= 0)
	{
		x = 0;
		mapx = 0;
		while (area[y][x])
		{
			if (area[y][x] != ' ' && area[y][x] != '\t')
				mapx++;		
			x++;
		}
		map[y] = (char *)malloc(sizeof(char) * (mapx + 1));
		while (x >= 0)
		{
			if (area[y][x] != ' ' && area[y][x] != '\t')
			{
				map[y][mapx] = area[y][x];
				mapx--;
			}
			x--;
		}
	}
	return (map);
}

void	print_tab(char **area)
{

	int	x;
	int	y;

	y = 0;
	while (area[y] != NULL)
	{
		x = 0;
		while (area[y][x])
		{
			putc(area[y][x]);
			x++;
			if (area[y][x])
				putc(' ');
		}
		putc('\n');
		y++;
	}	
}
