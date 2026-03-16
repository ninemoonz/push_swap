/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:05:17 by kkweon            #+#    #+#             */
/*   Updated: 2025/11/20 16:36:33 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	overlap_check(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (&src[i] == dst)
			return (1);
		i++;
	}
	return (0);
}

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*tmp_dst;
	const char	*tmp_src;
	size_t		i;

	if (!dst && !src)
		return (NULL);
	tmp_dst = (char *)dst;
	tmp_src = (const char *)src;
	i = 0;
	if (overlap_check(tmp_dst, tmp_src, n) > 0)
	{
		while (n-- > 0)
			tmp_dst[n] = tmp_src[n];
	}
	else
	{
		while (i < n)
		{
			tmp_dst[i] = tmp_src[i];
			i++;
		}
	}
	return (tmp_dst);
}
