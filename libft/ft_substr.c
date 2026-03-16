/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:22:48 by kkweon            #+#    #+#             */
/*   Updated: 2025/11/18 16:10:05 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest_mem;
	size_t	i;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	dest_mem = (char *)malloc((len + 1) * sizeof(char));
	if (!dest_mem)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest_mem[i] = s[start + i];
		i++;
	}
	dest_mem[i] = '\0';
	return (dest_mem);
}
