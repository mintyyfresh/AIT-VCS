#include <unistd.h>

void	ft_putchar(char c)
{
	int a;
	
	a = 4;
	write(1, &c, 1);
}
