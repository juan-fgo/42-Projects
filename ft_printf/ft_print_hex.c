/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-fgo <juan-fgo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 23:45:10 by juan-fgo          #+#    #+#             */
/*   Updated: 2024/02/07 12:49:03 by juan-fgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int nbr, const char *hexcod)
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
