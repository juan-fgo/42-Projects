/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-fgo <juan-fgo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 23:20:34 by juan-fgo          #+#    #+#             */
/*   Updated: 2024/02/07 10:01:57 by juan-fgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unint(unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n > 9)
		i += ft_print_nbr(n / 10);
	i += ft_print_char(n % 10 + '0');
	return (i);
}
