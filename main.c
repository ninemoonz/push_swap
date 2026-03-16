/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 17:14:24 by kkweon            #+#    #+#             */
/*   Updated: 2026/03/16 13:49:19 by kkweon           ###   ########.fr       */
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

t_node	*build_stack(int *num_arr, int len)
{
	t_node	*stack;
	int		i;

	stack = NULL;
	i = len - 1;
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
	int		len;

	stack_a = NULL;
	stack_b = NULL;
	num_arr = num_check(argc, argv, &len);
	if (!num_arr)
		return (0);
	if (argc == 2)
		len = count_strarr(ft_split(argv[1], ' '));
	else
		len = argc - 1;
	stack_a = build_stack(num_arr, len);
	push_swap(&stack_a, &stack_b);
	free(num_arr);
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
