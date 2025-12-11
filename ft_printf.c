/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwheatin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 10:54:13 by jwheatin          #+#    #+#             */
/*   Updated: 2025/12/11 09:44:02 by jwheatin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_select_format(va_list *ap, const char *str)
{
	size_t	length;

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

int	ft_printf(const char *str, ...)
{
	int		length;
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
/*
int	main(void)
{
	char	c = 'a';

	int length = ft_printf("bello %s %c %% %i %x %X %p %p\n", NULL, c, 1066, 213454545, 20484, 0, 0);
	int length2 = printf("bello %s %c %% %i %x %X %p %p\n", NULL, c, 1066, 213454545, 20484, 0, 0);
	printf("%i\n", length);
	printf("%i\n", length2);
	return (0);
}*/
