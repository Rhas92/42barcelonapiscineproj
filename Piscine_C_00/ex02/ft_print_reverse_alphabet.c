#include <unistd.h>

// Loop to write each letter from the 'z' to the 'a'
void	ft_print_reverse_alphabet(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		write(1, &letter, 1);
		letter--;
	}
}
