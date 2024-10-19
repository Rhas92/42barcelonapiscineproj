#include <unistd.h>

// Loop to write each letter from the 'a' to the 'z'
void	ft_print_reverse_alphabet(void)
{
	char letter = 'z';
	while (letter >= 'a')
	{
		write(1, &letter, 1);
		letter--;
	}
}

int	main()
{
	ft_print_reverse_alphabet();
	write(1, "\n", 1);
	return 0;
}
