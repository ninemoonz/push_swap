/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_check_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 18:01:50 by kkweon            #+#    #+#             */
/*   Updated: 2026/03/16 18:07:42 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_sign(char c)
{
	return (c == '+' || c == '-');
}

int	validity_check(char *s)
{
	int	i;

	i = 0;
	if (!s || s[0] == '\0')
		return (0);
	if (is_sign(s[i]))
		i++;
	if (s[i] == '\0')
		return (0);
	while (s[i])
	{
		if (!is_digit(s[i]))
			return (0);
		i++;
	}
	return (1);
}

int	count_strarr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}
