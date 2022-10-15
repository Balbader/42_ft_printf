#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int		nb = 7;
	int		*ptr = &nb;

	// string
	ft_printf("%s\n", "Hello World.");
	ft_printf("Hello World.");

	// char
	ft_printf("%c\n", 'C');
	ft_printf("C\n");

	// int d - i
	ft_printf("%d\n", 42);
	ft_printf("%d\n", -42);

	ft_printf("%i\n", 42);
	ft_printf("%i\n", -42);

	// unsigned int
	ft_printf("%u\n", 4294967295);
	ft_printf("%u\n", -4294967295);

	// pointer
	ft_printf("%p\n", ptr);

	// hexadecimal x - X
	ft_printf("%x\n", 3294967295);
	ft_printf("%X\n", 3294967295);

	// %
	ft_printf("%\n");
	
	return (0);
}
