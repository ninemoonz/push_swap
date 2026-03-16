/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:16:11 by kkweon            #+#    #+#             */
/*   Updated: 2026/02/26 16:29:37 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	word_count(char const *s, char c)
{
	int		flag;
	size_t	count;

	flag = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && flag == 0)
		{
			flag = 1;
			count++;
		}
		else if (*s == c)
			flag = 0;
		s++;
	}
	return (count);
}

char	*word_generator(char const *s, char c)
{
	int		i;
	char	*word;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *)malloc((i + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

void	split_free(char **arr_malloc, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(arr_malloc[j]);
		j++;
	}
	free(arr_malloc);
}

char	**free_error(char **arr, int i)
{
	split_free(arr, i);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**arr_malloc;

	if (!s)
		return (NULL);
	arr_malloc = (char **)malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!arr_malloc)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		arr_malloc[i] = word_generator(s, c);
		if (arr_malloc[i] == NULL)
			return (free_error(arr_malloc, i));
		i++;
		while (*s && *s != c)
			s++;
	}
	arr_malloc[i] = NULL;
	return (arr_malloc);
}
