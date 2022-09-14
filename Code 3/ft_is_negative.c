#include <unistd.h>

void	ft_is_negative(int N)
{
	char	positive;
	char	negative;
	
	positive = 'P';
	negative = 'N';
	if (N < 0)
	{
		write(1, &negative, 1);
	}
	else
	{
		write(1, &positive, 1);
	}
}
