/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:49:18 by baalbade          #+#    #+#             */
/*   Updated: 2022/10/15 16:49:57 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int		nb = 7;
	int		*ptr = &nb;

	printf("========= STRINGS =================\n");
	printf("\n");

	ft_printf("String with '%%s' with ft_printf:\n");
	ft_printf("%s\n", "Hello World.");

	ft_printf("String without '%%s' with ft_printf:\n");
	ft_printf("Hello World.\n");

	printf("\n");

	printf("String with '%%s' with printf:\n");
	printf("%s\n", "Hello World.");

	printf("String without '%%s' with printf:\n");
	printf("Hello World.\n");

	printf("\n");
	printf("========= CHARACTERS ==============\n");
	printf("\n");

	ft_printf("char '%%c' with ft_printf:\n");
	ft_printf("%c\n", 'C');
	ft_printf("C\n");

	printf("\n");

	printf("char '%%c' with printf:\n");
	printf("%c\n", 'C');
	printf("C\n");

	printf("\n");
	printf("========= INTEGERS ==============\n");
	printf("\n");

	ft_printf("int '%%d' with ft_printf:\n");
	ft_printf("%d\n", 42);
	ft_printf("%d\n", -42);
	ft_printf("\n");

	printf("int '%%d' with printf:\n");
	printf("%d\n", 42);
	printf("%d\n", -42);
	printf("\n");

	ft_printf("int '%%i' with ft_printf:\n");
	ft_printf("%i\n", 42);
	ft_printf("%i\n", -42);
	ft_printf("\n");

	printf("int '%%i' with printf:\n");
	printf("%i\n", 42);
	printf("%i\n", -42);

	printf("\n");
	printf("========= UNSIGNED INTEGERS =========\n");
	printf("\n");

	ft_printf("unsigned int '%%u' with ft_printf:\n");
	ft_printf("%u\n", 4294967295);
	ft_printf("%u\n", 0);
	ft_printf("\n");

	printf("unsigned int '%%lu' with printf:\n");
	printf("%lu\n", 4294967295);
	printf("%u\n", 0);

	printf("\n");
	printf("========= POINTER ==================\n");
	printf("\n");

	ft_printf("pointer '%%p' with ft_printf:\n");
	ft_printf("%p\n", ptr);
	ft_printf("\n");

	printf("pointer '%%p' with printf:\n");
	printf("%p\n", ptr);

	printf("\n");
	printf("========= HEXADECIMAL ==============\n");
	printf("\n");

	ft_printf("hexadecimal '%%x' and '%%X' with ft_printf:\n");
	ft_printf("%x\n", 3294967295);
	ft_printf("%X\n", 3294967295);
	ft_printf("\n");

	printf("hexadecimal '%%x' and '%%X' with printf:\n");
	printf("%lx\n", 3294967295);
	printf("%lX\n", 3294967295);

	printf("\n");
	printf("========== PERCENT SIGN ===========\n");
	printf("\n");

	ft_printf("'%%' with ft_printf:\n");
	ft_printf("%%\n");
	ft_printf("\n");

	printf("'%%' with printf:\n");
	printf("%%\n");
	
	return (0);
}
