/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwheatin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 12:16:59 by jwheatin          #+#    #+#             */
/*   Updated: 2025/12/10 15:51:13 by jwheatin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_select_format(va_list *ap, const char *str)
{
	int	length;

	length = 0;
	str++;
	if (*str == 'c')
		length = ft_printf_char(ap);
	else if (*str == 's')
		length = ft_printf_str(ap);
	else if (*str == 'p')
		length = ft_printf_ptr(ap);
	else if (*str == 'd' || *str == 'i')
		length = ft_printf_int(ap);
	else if (*str == 'u')
		length = ft_printf_uns(ap);
	else if (*str == 'x')
		length = ft_printf_hexl(ap);
	else if (*str == 'X')
		length = ft_printf_hexu(ap);
	else if (*str == '%')
		length = ft_printf_perc();
	str++;
	return (length);	
}
