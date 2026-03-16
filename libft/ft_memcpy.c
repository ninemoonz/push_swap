/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 14:31:07 by kkweon            #+#    #+#             */
/*   Updated: 2025/11/18 11:06:03 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*char_dst;
	const unsigned char	*char_src;
	size_t				i;

	if (!dest && !src)
		return (dest);
	if (n == 0)
		return (dest);
	char_dst = (unsigned char *)dest;
	char_src = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		char_dst[i] = char_src[i];
		i++;
	}
	return (dest);
}
