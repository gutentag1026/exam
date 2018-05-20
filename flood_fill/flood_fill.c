
#include "flood_fill.h"


void	helper(char **area, t_point size, t_point p, char c)
{
	t_point	tmp;

	if (p.y <= 0 || p.x <= 0 || p.y > size.y || p.x > size.x)
		return;
	if (area[p.y - 1][p.x - 1] == c)
	{
		area[p.y - 1][p.x - 1] = 'F';
		tmp = p;
		tmp.y = p.y - 1;
		if (tmp.y)
			helper(area, size, tmp, c);
		tmp.y = p.y;
		tmp.x = p.x + 1;
		if (tmp.x <= size.x) 
			helper(area, size, tmp, c);
		tmp.x = p.x;
		tmp.y = p.y + 1;
		if (tmp.y <= size.y)
			helper(area, size, tmp, c);
		tmp.y = p.y;
		tmp.x = p.x - 1;
		if (tmp.x)
			helper(area, size, tmp, c);
	}
}


void	flood_fill(char **area, t_point size, t_point begin)
{
	char	zone;

	if (begin.y > size.y || begin.x > size.x || !begin.y || !begin.x)
		return;
	zone = area[begin.y - 1][begin.x - 1];
	helper(area, size, begin, zone);
}
