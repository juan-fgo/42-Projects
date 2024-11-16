/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-fgo <juan-fgo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:17:44 by juan-fgo          #+#    #+#             */
/*   Updated: 2024/09/21 12:04:25 by juan-fgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove( void *dst, const void *src, size_t len)
{
	char	*dst2;
	char	*src2;

	if (!dst && !src)
		return (NULL);
	dst2 = (char *)dst;
	src2 = (char *)src;
	if (dst2 >= src2)
		while (len--)
			dst2[len] = src2[len];
	else
		ft_memcpy(dst2, src2, len);
	return (dst2);
}
