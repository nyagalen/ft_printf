/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svydrina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:41:22 by svydrina          #+#    #+#             */
/*   Updated: 2023/05/25 17:10:59 by svydrina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int	ft_puthex(unsigned long long l, char x);
int	ft_put_posint(unsigned int u);
int	ft_putstr(char *s);
int	ft_putptr(unsigned long long l);
int	ft_putnbr(int n);

#endif
