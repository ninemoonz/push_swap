/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:51:50 by kkweon            #+#    #+#             */
/*   Updated: 2025/11/17 16:19:25 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s1_c;
	const unsigned char	*s2_c;

	i = 0;
	s1_c = (const unsigned char *)s1;
	s2_c = (const unsigned char *)s2;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1_c[i] != s2_c[i])
			return (s1_c[i] - s2_c[i]);
		i++;
	}
	return (0);
}
