/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-fgo <juan-fgo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 08:58:11 by juan-fgo          #+#    #+#             */
/*   Updated: 2023/11/26 11:58:51 by juan-fgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	c2;
	char	*s2;

	c2 = c;
	s2 = (char *)s;
	while (*s2)
	{
		if (*s2 == c2)
			return (s2);
		s2++;
	}
	if (c2 == '\0')
		return (s2);
	return (0);
}
