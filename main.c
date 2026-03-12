/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 17:14:24 by kkweon            #+#    #+#             */
/*   Updated: 2026/03/11 17:52:59 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_intarr(int *arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		i++;
	}
	return (i);
}

t_node	*build_stack(int *num_arr)
{
	t_node	*stack;
	int		i;

	stack = NULL;
	i = count_intarr(num_arr);
	while (i >= 0)
	{
		push(&stack, num_arr[i]);
		i--;
	}
	return (stack);
}

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;
	int		*num_arr;

	stack_a = NULL;
	stack_b = NULL;
	num_arr = num_check(argc, argv);
	stack_a = build_stack(num_arr);
	ranking(stack_a);
	push_swap(&stack_a, &stack_b);
	free(num_arr);
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
