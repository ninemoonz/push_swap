/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:44:01 by kkweon            #+#    #+#             */
/*   Updated: 2026/02/17 15:53:44 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"
#include "push_swap.h"

int main (int argc, char **argv)
{
	char **num_arr;
	int count;

	if (argc < 2) // no arguments
		return (-1);
	else if (argc == 2) // when the arguments are passed in as a string ./out "1 2 3 4 5"
	{
		num_arr = ft_split(argv[1], ' ');
		count = 0;
		while (num_arr[count])
			count++;
	}
	else // when the arguments are passed in as multiple arguments ./out 1 2 3 4 5
	{
		num_arr = &argv[1];
		count = argc - 1;
	}
	int i;

	i = 1;
	while (argv[i] != NULL)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	num_check(argv);
	return (0);
}
