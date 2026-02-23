/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 17:05:45 by kkweon            #+#    #+#             */
/*   Updated: 2026/02/23 15:17:10 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int  is_sign(char c)
{
	return (c == '+' || c == '-');
}

int validity_check(char *s)
{
	int i;
	
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

void double_check(int argc, int *num_arr)
{
    int i;
    int j;

    i = 0;
    while (i < argc)
    {
        j = i + 1;
        while(j < argc)
        {
            if (num_arr[i] == num_arr[j])
                print_error();
            j++;
        }
        i++;
    }
}

int atoi_checked(char *s)
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
	return (ft_atoi(s));
}

int *num_check(int argc, char **argv)
{
	int *num_arr;
	int i;

	if (argc <= 1)
		return (NULL);
	num_arr = (int *)malloc((argc - 1) * sizeof(int));
	if (!num_arr)
		print_error();
	i = 1;
	while (i < argc)
	{
		if (!validity_check(argv[i]))
			print_error();
		num_arr[i - 1] = atoi_checked(argv[i]);
		i++;
	}
	double_check(argc - 1, num_arr);
	return (num_arr);
}
