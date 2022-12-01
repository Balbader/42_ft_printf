/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:47:33 by baalbade          #+#    #+#             */
/*   Updated: 2022/11/30 08:44:46 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_char(char c, int *tot_len)
{
	write(1, &c, 1);
	(*tot_len)++;
}

void	ft_print_str(char *str, int *tot_len)
{
	size_t	i;

	if (!str)
	{
		(*tot_len) = 0;
		return ;
	}
	i = 0;
	while (str[i] != '\0')
	{
		ft_print_char(str[i], tot_len);
		i++;
	}
}
