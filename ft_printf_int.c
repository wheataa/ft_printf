/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwheatin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:10:00 by jwheatin          #+#    #+#             */
/*   Updated: 2025/12/10 15:27:36 by jwheatin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_int(va_list *ap)
{
	int	length;
	int	num_int;
	char	*num_str;

	num_int = va_arg(*ap, int);
	num_str = ft_itoa(num_int);
	length = 0;
	while (num_str[length])
	{
		write(1, &num_str[length], 1);
		length++;
	}
	free(num_str);
	return (length);
}
