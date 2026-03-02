/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 17:05:45 by kkweon            #+#    #+#             */
/*   Updated: 2026/03/02 15:04:20 by kkweon           ###   ########.fr       */
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

void	double_check(int argc, int *num_arr)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (num_arr[i] == num_arr[j])
				print_error();
			j++;
		}
		i++;
	}
}

int	atoi_check(char *s)
{
	long long	n;
	int			sign;
	int			i;

	n = 0;
	sign = 1;
	i = 0;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i])
	{
		n = n * 10 + (s[i] - '0');
		if (sign == 1 && n > INT_MAX)
			print_error();
		if (sign == -1 && -n < INT_MIN)
			print_error();
		i++;
	}
	return ((int)(sign * n));
}

int	count_strarr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

int	*args_process(char **char_arr, int len)
{
	int	*num_arr;
	int	i;

	num_arr = (int *)malloc((len) * sizeof(int));
	if (!num_arr)
		print_error();
	i = 0;
	while (i < len)
	{
		if (!validity_check(char_arr[i]))
			print_error();
		num_arr[i] = atoi_check(char_arr[i]);
		i++;
	}
	double_check(len, num_arr);
	return (num_arr);
}

int	*num_check(int argc, char **argv)
{
	char	**char_arr;
	int		*int_arr;
	int		len;

	if (argc <= 1)
		return (NULL);
	if (argc == 2)
	{
		char_arr = ft_split(argv[1], ' ');
		len = count_strarr(char_arr);
	}
	else
	{
		char_arr = argv + 1;
		len = argc - 1;
	}
	int_arr = args_process(char_arr, len);
	if (argc == 2)
		split_free(char_arr, len);
	return (int_arr);
}
