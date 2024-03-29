/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svydrina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:29:45 by svydrina          #+#    #+#             */
/*   Updated: 2023/05/25 17:12:17 by svydrina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long l, char x)
{
	if (l < 16)
	{
		if (x == 'x')
			return (ft_putchar("0123456789abcdef"[l]));
		else if (x == 'X')
			return (ft_putchar("0123456789ABCDEF"[l]));
	}
	return (ft_puthex(l / 16, x) + ft_puthex(l % 16, x));
}
