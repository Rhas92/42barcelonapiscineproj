// ft_putchar function will be used to print characters.
void	ft_putchar(char c);

// The function rush generates a rectangle of width x and height y using specific characters.
// If x or y is less than or equal to zero, the function returns without printing anything.
void	rush(int x, int y)
{
	int row;
	int col;
	
	row = 0;
	if (x <= 0 || y <= 0)
		return;
	// Loop through each row
	while (row < y)
	{
		col = 0;
		// Loop through each column in the current row
		while (col < x)
		{
			// Check if the current position is a corner or an edge
			if (col == 0 && (row == 0 || row == y -1))
				ft_putchar('A'); // Top-left or bottom-left corner
			else if (col == x - 1 && (row == 0 || row == y -1))
				ft_putchar('C'); // Top-right or bottom-right corner
			else if (row == 0 || row == y - 1)
				ft_putchar('B'); // Top or bottom border
			else if (col == 0 || col == x - 1)
				ft_putchar('B'); // Left or right border
			else
				ft_putchar(' '); // Interior space
			col++;
		}
		ft_putchar('\n'); // Move to the next line after each row
		row++;
	}
}
