/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 17:14:24 by kkweon            #+#    #+#             */
/*   Updated: 2026/03/02 15:03:44 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*build_stack(int *num_arr, int len)
{
	t_node	*stack;
	int		i;

	stack = NULL;
	i = 0;
	while (i < len)
	{
		push(&stack, num_arr[i]);
		i++;
	}
	return (stack);
}

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	int		*num_arr;
	int		len;

	stack_a = NULL;
	if (argc == 2)
		len = count_strarr(ft_split(argv[1], ' '));
	else
		len = argc - 1;
	num_arr = num_check(argc, argv);
	stack_a = build_stack(num_arr, len);
	return (0);
}
