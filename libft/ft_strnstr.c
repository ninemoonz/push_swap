/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:56:08 by kkweon            #+#    #+#             */
/*   Updated: 2025/11/20 17:40:03 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;
	size_t	j;
	char	*tmp_big;
	char	*tmp_small;

	tmp_big = (char *)big;
	tmp_small = (char *)small;
	if (*tmp_small == '\0')
		return (tmp_big);
	i = 0;
	while (tmp_big[i] && i < len)
	{
		j = 0;
		while (i + j < len && (tmp_big[i + j] == tmp_small[j]))
		{
			if ((tmp_big[i + j] != '\0') && (tmp_small[j + 1] == '\0'))
				return (&tmp_big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
