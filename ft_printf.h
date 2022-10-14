/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:05:46 by baalbade          #+#    #+#             */
/*   Updated: 2022/10/12 15:05:48 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>

int		ft_printf(const char *, ...);

void	ft_print_char(char c);
void	ft_print_str(char *str);

void	ft_print_nb(int nb);
void	ft_print_ptr(size_t ptr);
void	ft_print_hexa(unsigned int nb, char x);
void	ft_print_unsigned(unsigned int u);

#endif 
