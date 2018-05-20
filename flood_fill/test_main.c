#include "test_functions.h"
#include "flood_fill.h"

int	main(void)
{
	char **area;
	t_point size = { 14, 7 };
	t_point begin = { 6, 4 };
	char *zone[] = {
		"1 1 1 0 1 1 0 0 0 0 0 1 0 1",
		"1 0 0 1 0 1 1 1 0 1 0 1 1 0",
		"1 1 1 0 0 0 1 0 0 1 1 0 0 0",
		"1 0 0 1 0 0 0 0 1 1 1 0 1 0",
		"0 1 0 0 1 0 1 1 0 0 0 1 0 0",
		"0 0 1 1 0 0 1 0 1 1 1 0 0 0",
		"1 0 0 0 1 0 1 0 0 0 0 0 1 1",
		0
	};

	area = make_area(zone);
	print_tab(area);
	flood_fill(area, size, begin);
	putc('\n');
	print_tab(area);
	return (0);
}
