/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:35:11 by kkweon            #+#    #+#             */
/*   Updated: 2025/11/17 16:47:38 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*str1_tmp;
	unsigned char	*str2_tmp;
	size_t			i;

	str1_tmp = (unsigned char *)str1;
	str2_tmp = (unsigned char *)str2;
	i = 0;
	while (i < n)
	{
		if (str1_tmp[i] != str2_tmp[i])
			return (str1_tmp[i] - str2_tmp[i]);
		i++;
	}
	return (0);
}
