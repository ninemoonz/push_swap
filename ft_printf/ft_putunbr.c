/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 14:30:03 by kkweon            #+#    #+#             */
/*   Updated: 2026/01/12 13:34:07 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	unsigned int	res;

	res = 0;
	if (n == 0)
		return (ft_putchar('0'), 1);
	if (n >= 10)
	{
		res += ft_putnbr(n / 10);
		res += ft_putnbr(n % 10);
	}
	else
		res += ft_putchar(n + '0');
	return (res);
}
