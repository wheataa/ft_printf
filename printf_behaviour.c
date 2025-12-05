/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_behaviour.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwheatin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 12:54:02 by jwheatin          #+#    #+#             */
/*   Updated: 2025/12/05 12:54:23 by jwheatin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	*s = "hello";
	printf("character c: %c\n", 77);
	printf("string s: %sc\n", s);
	printf("pointer p: %p\n", &s);
	printf("decimal d: %d\n", 123.456);
	printf("integer i: %i\n", 1234);
	printf("unsigned decimal u: %u %u\n", 1234);
	printf("hexadecimal x: %x\n", 123456789);
	printf("hexadecimal X: %X\n", 123456789);
	printf("% %: %%\n");

	// '-' left adjusted on the field boundary - converted value padded on the right with blanks
	printf("'-25i' left aligned: %-25i\n", 45);
	// '0' value zero padded on the left. If both '-' and '0', '0' is ignored.
	printf("'03i' 0 zero padded: %03i\n", 45);
	// '.' precision specifier
	printf("'.2i' precision 2: %.2i\n", 12345);
	printf("'.10i' precision 10: %.10i\n", 12345);

	// '+' sign always placed before a number. + overrides a space if both used.
	printf("'+i' %+i\n", 25);
	// ' ' blank should be left before a positive number or empty string from signed conversion.
	printf("' i' % i\n", 25);
	// '#' value converted to alternate form (0x for nonzero hex, nothing else applies to our specifiers).
	printf("'#x' %#x\n", 12345678);

	printf("'z12' %z12\n");
	printf("'z' %z");
	int i = printf("'z' hello %z\n");
	printf("%i\n", i);

	return (0);
}
