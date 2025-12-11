/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex_ptr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwheatin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:48:04 by jwheatin          #+#    #+#             */
/*   Updated: 2025/12/11 09:43:33 by jwheatin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_base(size_t n, char *base, unsigned int *counter)
{
	char	c;

	if (n >= 16)
		ft_putnbr_base(n / 16, base, counter);
	c = base[n % 16];
	(*counter)++;
	write(1, &c, 1);
	return (*counter);
}

int	ft_printf_hexl(va_list *ap)
{
	unsigned int	n;
	unsigned int	length;

	length = 0;
	n = va_arg(*ap, unsigned int);
	length = ft_putnbr_base(n, "0123456789abcdef", &length);
	return (length);
}

int	ft_printf_hexu(va_list *ap)
{
	unsigned int	n;
	unsigned int	length;

	length = 0;
	n = va_arg(*ap, unsigned int);
	length = ft_putnbr_base(n, "0123456789ABCDEF", &length);
	return (length);
}

int	ft_printf_ptr(va_list *ap)
{
	size_t			n;
	unsigned int	length;

	n = va_arg(*ap, size_t);
	if (!n)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	length = 2;
	write(1, "0x", 2);
	length = ft_putnbr_base(n, "0123456789abcdef", &length);
	return (length);
}
