/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-fgo <juan-fgo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 22:35:36 by juan-fgo          #+#    #+#             */
/*   Updated: 2024/02/07 12:55:16 by juan-fgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	converter(char format, va_list args)
{
	if (format == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (format == 's')
		return (ft_print_string(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_print_ptr(va_arg(args, uintptr_t)));
	else if (format == 'd' || format == 'i')
		return (ft_print_nbr(va_arg(args, int)));
	else if (format == 'u')
		return (ft_print_unint(va_arg(args, unsigned int)));
	else if (format == 'x')
		return (ft_print_hex(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (format == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (format == '%')
		return (ft_print_char('%'));
	return (1);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	if (write(1, "", 0) == -1)
		return (-1);
	i = 0;
	len = 0;
	va_start (args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			len += converter(format[i + 1], args);
			i++;
		}
		else
			len += ft_print_char(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}
