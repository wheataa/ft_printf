/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwheatin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:04:01 by jwheatin          #+#    #+#             */
/*   Updated: 2025/12/10 14:44:20 by jwheatin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Parameters:
 *  n: integer to convert
 * Return: string representing integer, NULL if it fails
 * External function: malloc
 * Description: allocates memory using malloc(3) and returns a string 
 * representing the number as an argument. Negative numbers must be handled.
 * */

#include "ft_printf.h"

static int	ft_itoa_length(long n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	len++;
	return (len);
}

char	*ft_itoa(long n_l)
{
	int		len;
	char	*str;
	long	current;

	len = ft_itoa_length(n_l);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	current = n_l;
	if (n_l < 0)
		current = -current;
	while (len >= 0)
	{
		str[len] = (current % 10) + '0';
		current = current / 10;
		len--;
	}
	if (n_l < 0)
		str[0] = '-';
	return (str);
}
