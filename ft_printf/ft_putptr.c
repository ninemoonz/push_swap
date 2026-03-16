/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 16:07:04 by kkweon            #+#    #+#             */
/*   Updated: 2026/01/12 12:34:45 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	unsigned long long	addr;
	int					count;

	if (!ptr)
		return (write(1, "(nil)", 5));
	count = 0;
	count += ft_putstr("0x");
	addr = (unsigned long long)ptr;
	count += ft_puthex(addr);
	return (count);
}
