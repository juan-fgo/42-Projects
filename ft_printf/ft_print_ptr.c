/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-fgo <juan-fgo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 23:00:01 by juan-fgo          #+#    #+#             */
/*   Updated: 2024/02/07 12:49:41 by juan-fgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex2(long long int nbr, const char *hexcod)
{
	int	hexstr[16];
	int	i;
	int	hexdef;

	i = 0;
	hexdef = 0;
	if (nbr == 0)
		hexdef += ft_print_char('0');
	while (nbr)
	{
		hexstr[i] = nbr % 16;
		nbr = nbr / 16;
		i++;
	}
	while (--i >= 0)
		hexdef += ft_print_char(hexcod[hexstr[i]]);
	return (hexdef);
}

int	ft_print_ptr(uintptr_t n)
{
	const char	*hexcod;
	int			i;

	hexcod = "0123456789abcdef";
	i = write(1, "0x", 2);
	if (n >= 16)
	{
		i += ft_print_hex2((n / 16), hexcod);
		i += ft_print_hex2((n % 16), hexcod);
	}
	else
		i += ft_print_hex2(n, hexcod);
	return (i);
}
