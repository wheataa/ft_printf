/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwheatin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:35:21 by jwheatin          #+#    #+#             */
/*   Updated: 2025/12/10 15:33:37 by jwheatin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_uns(va_list *ap)
{
	int	length;
	unsigned int	num;
	char	*num_str;

	num = va_arg(*ap, unsigned int);
	num_str = ft_itoa(num);
	length = 0;
	while (num_str[length])
	{
		write(1, &num_str[length], 1);
		length++;
	}
	free(num_str);
	return (length);
}
