/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:33:32 by kkweon            #+#    #+#             */
/*   Updated: 2025/11/18 12:28:59 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	digit_gen(int n)
{
	int	digit_count;

	digit_count = 0;
	if (n == 0)
		digit_count++;
	if (n < 0)
	{
		n = n * -1;
		digit_count++;
	}
	while (n != 0)
	{
		n = n / 10;
		digit_count++;
	}
	return (digit_count);
}

char	*digit_space(int len)
{
	char	*tmp;

	tmp = (char *)malloc((len + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	tmp[0] = '0';
	return (tmp);
}

char	*ft_itoa(int n)
{
	int		digit;
	long	nbr;
	int		i;
	char	*res;

	nbr = n;
	digit = digit_gen(nbr);
	res = digit_space(digit);
	if (!res)
		return (NULL);
	if (nbr < 0)
	{
		nbr = -nbr;
		res[0] = '-';
	}
	i = digit - 1;
	while (nbr != 0)
	{
		res[i] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i--;
	}
	res[digit] = '\0';
	return (res);
}
