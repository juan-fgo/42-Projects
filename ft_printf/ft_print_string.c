/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-fgo <juan-fgo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 00:43:36 by juan-fgo          #+#    #+#             */
/*   Updated: 2024/02/05 10:51:04 by juan-fgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *str)
{
	int	len;

	len = 0;
	if (!str)
		str = "(null)";
	len = ft_print_strlen(str);
	return (write(1, str, len));
}
