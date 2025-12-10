/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_csp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwheatin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 12:07:23 by jwheatin          #+#    #+#             */
/*   Updated: 2025/12/10 16:57:47 by jwheatin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_char(va_list *ap)
{
	int	c;

	c = va_arg(*ap, int);
	write(1, &c, 1);
	return (1);
}

int	ft_printf_str(va_list *ap)
{
	int		length;
	char	*s;

	s = va_arg(*ap, char *);
	length = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[length])
	{
		write (1, &s[length], 1);
		length++;
	}
	return (length);
}

int	ft_printf_perc(void)
{
	write(1, "%", 1);
	return (1);
}
