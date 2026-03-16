/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:27:29 by kkweon            #+#    #+#             */
/*   Updated: 2025/11/18 12:46:02 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = malloc(nitems * size);
	if (!tmp)
		return (NULL);
	while (i < nitems * size)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}
