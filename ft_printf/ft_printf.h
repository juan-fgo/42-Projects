/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-fgo <juan-fgo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 00:07:59 by juan-fgo          #+#    #+#             */
/*   Updated: 2024/02/07 12:48:30 by juan-fgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdint.h>

int	ft_printf(char const *format, ...);
int	ft_print_char(int c);
int	ft_print_string(char *str);
int	ft_print_strlen(const char *str);
int	ft_print_nbr(int n);
int	ft_print_unint(unsigned int n);
int	ft_print_hex(unsigned int nbr, const char *hexcod);
int	ft_print_ptr(uintptr_t n);

#endif
