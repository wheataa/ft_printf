/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwheatin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 12:07:23 by jwheatin          #+#    #+#             */
/*   Updated: 2025/12/10 15:27:20 by jwheatin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_str(va_list *ap)
{
	int	length;
	char	*s;
	
	s = va_arg(*ap, char *);
	length = 0;
	while (*s)
	{
		write (1, s, 1);
		length++;
		s++;
	}
	return (length);
}
