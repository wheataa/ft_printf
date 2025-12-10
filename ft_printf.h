/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwheatin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 12:54:27 by jwheatin          #+#    #+#             */
/*   Updated: 2025/12/10 16:02:12 by jwheatin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
int		ft_select_format(va_list *ap, const char *str);
int		ft_printf_char(va_list *ap);
int		ft_printf_str(va_list *ap);
int		ft_printf_ptr(va_list *ap);
int		ft_printf_dec(va_list *ap);
int		ft_printf_int(va_list *ap);
int		ft_printf_uns(va_list *ap);
int		ft_printf_hexl(va_list *ap);
int		ft_printf_hexu(va_list *ap);
int		ft_printf_perc(void);
char	*ft_itoa(long int n);

#endif
