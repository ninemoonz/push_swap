/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 17:14:24 by kkweon            #+#    #+#             */
/*   Updated: 2026/03/04 17:17:08 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	char	**tmp;
	int		*num_arr;
	int		len;

	stack_a = NULL;
	if (argc == 2)
	{
		tmp = ft_split(argv[1], ' ');
		len = count_strarr(tmp);
		split_free(tmp, len);
	}
	else
		len = argc - 1;
	num_arr = num_check(argc, argv);
	stack_a = build_stack(num_arr, len);
	ranking(stack_a);
	// small_sort(&stack_a, len);
	while (stack_a != NULL)
	{
		printf("value: %d\trank: %d\n", stack_a->value, stack_a->rank);
		stack_a = stack_a->next;
	}
	free(num_arr);
	free_stack(stack_a);
	return (0);
}
