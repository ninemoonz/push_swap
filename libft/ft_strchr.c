/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:53:47 by kkweon            #+#    #+#             */
/*   Updated: 2025/11/17 15:46:04 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int init)
{
	int		i;
	char	*tmp_str;
	char	c;

	i = 0;
	c = (char)init;
	tmp_str = (char *)str;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (&tmp_str[i]);
		i++;
	}
	if (str[i] == c)
		return (&tmp_str[i]);
	return (NULL);
}
