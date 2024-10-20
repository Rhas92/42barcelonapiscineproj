#include <unistd.h>

void ft_print_comb2(void)
{
	int i = 0;
	int j;
	char tens;
	char units;

	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			tens = '0' + (i / 10);
			units = '0' + (i % 10);
			write (1, &tens, 1);
			write (1, &units, 1);
			write (1, " ", 1);
			tens = '0' + (j / 10);
			units = '0' + (j % 10);
			write(1, &tens, 1);
			write(1, &units, 1);
			if (i != 98 || j != 99)
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}
