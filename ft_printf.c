/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:04:56 by baalbade          #+#    #+#             */
/*   Updated: 2022/10/14 15:05:29 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check_sign(char sign, va_list *arg)
{
	if (sign == 's')
		ft_print_str(va_arg(*arg, char *));
	else if (sign == 'd' || sign == 'i')
		ft_print_nb(va_arg(*arg, int));
	else if (sign == 'u')
		ft_print_unsigned(va_arg(*arg, unsigned int));
	else if (sign == 'x')
		ft_print_hexa(va_arg(*arg, unsigned int), 'x');
	else if (sign == 'X')
		ft_print_hexa(va_arg(*arg, unsigned int), 'X');
	else if (sign == 'p')
		ft_print_ptr(va_arg(*arg, size_t));
	else if (sign == 'c')
		ft_print_char(va_arg(*arg, int));
	else if (sign == '%')
		ft_print_char('%');
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;

	i = 0;
	va_start(arg, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			ft_check_sign(str[i], &arg);
			// i++;
		}
		else
		{
			ft_print_char((char)str[i]);
			i++;
		}
	}
	va_end(arg);
	return (0);
}
