/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-fgo <juan-fgo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 00:43:36 by juan-fgo          #+#    #+#             */
/*   Updated: 2024/02/05 10:07:20 by juan-fgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int n)
{
	unsigned int	i;

	i = 0;
	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		i += ft_print_char('-');
		n *= -1;
	}
	if (n > 9)
	{
		i += ft_print_nbr(n / 10);
		i += ft_print_char(n % 10 + '0');
	}
	else
		i += ft_print_char(n + '0');
	return (i);
}
