/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwheatin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 10:54:13 by jwheatin          #+#    #+#             */
/*   Updated: 2025/12/10 15:56:57 by jwheatin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int	length;
	va_list	ap;

	length = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			length += ft_select_format(&ap, str);
			str += 2;
		}
		else
		{
			write(1, str, 1);
			length++;
			str++;
		}
	}
	va_end(ap);
	return (length);
}


int	main(void)
{
	char	c = 'a';

	int length = ft_printf("bello %s %c %% %i %x %X %p \n", "borld", c, 1066, 213454545, 20484, &c);
	int length2 = printf("bello %s %c %% %i %x %X %p \n", "borld", c, 1066, 213454545, 20484, &c);
	printf("%i\n", length);
	printf("%i\n", length2);
	return (0);
}
