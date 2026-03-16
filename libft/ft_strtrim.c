/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:53:48 by kkweon            #+#    #+#             */
/*   Updated: 2025/11/21 13:33:33 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	set_check(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*trimmed_str(char const *s1, size_t i, size_t len)
{
	size_t	j;
	char	*trimmed;

	if (len <= 0 || i >= ft_strlen(s1))
		return (ft_strdup(""));
	trimmed = (char *)malloc((len - (i - 1) + 1) * sizeof(char));
	if (!trimmed)
		return (NULL);
	j = 0;
	while (j < len - (i - 1))
	{
		trimmed[j] = s1[i + j];
		j++;
	}
	trimmed[j] = '\0';
	return (trimmed);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	len;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1) - 1;
	i = 0;
	while (set_check(set, s1[i]) > 0)
		i++;
	while (set_check(set, s1[len]) > 0)
		len--;
	return (trimmed_str(s1, i, len));
}
