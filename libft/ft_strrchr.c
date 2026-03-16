/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 17:12:29 by kkweon            #+#    #+#             */
/*   Updated: 2025/11/20 17:16:09 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int init)
{
	int		len;
	char	*tmp_str;
	char	c;

	c = (char)init;
	tmp_str = (char *)str;
	len = ft_strlen(tmp_str);
	while (len >= 0)
	{
		if (str[len] == c)
			return (&tmp_str[len]);
		len--;
	}
	return (NULL);
}
