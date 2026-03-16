/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:14:17 by kkweon            #+#    #+#             */
/*   Updated: 2025/11/17 16:38:58 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*tmp_str;
	unsigned char	needle;
	size_t			i;

	tmp_str = (unsigned char *)str;
	needle = (unsigned char)c;
	i = 0;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (tmp_str[i] == needle)
			return ((void *)&tmp_str[i]);
		i++;
	}
	return (NULL);
}
