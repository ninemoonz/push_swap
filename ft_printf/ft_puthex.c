/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 12:59:22 by kkweon            #+#    #+#             */
/*   Updated: 2026/01/12 12:23:53 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long n)
{
	char	*hex_letter;
	int		hex_nbr;

	hex_letter = "0123456789abcdef";
	hex_nbr = 0;
	if (n >= 16)
		hex_nbr += ft_puthex(n / 16);
	write(1, &hex_letter[n % 16], 1);
	hex_nbr++;
	return (hex_nbr);
}
