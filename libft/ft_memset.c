/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-fgo <juan-fgo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 00:33:58 by juan-fgo          #+#    #+#             */
/*   Updated: 2023/11/23 09:47:13 by juan-fgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*b2;
	size_t	i;

	b2 = (char *)b;
	i = 0;
	while (i < len)
	{
		b2[i] = c;
		i++;
	}
	return (b2);
}
