/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:44:01 by kkweon            #+#    #+#             */
/*   Updated: 2026/02/23 17:14:34 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"
#include "push_swap.h"

t_node *fill_stack(char **argv)
{
	t_node *stack;
	int i;

	stack = NULL;
	i = 1;
	while (argv[i])
	{
		append(&stack, ft_atoi(argv[i]));
		i++;
	}
	return (stack);
}

int	main(int argc, char **argv)
{
	t_node *stack_a;
	t_node *stack_b;
	t_node *test;

	stack_a = NULL;
	stack_b = NULL;
	if (num_check(argc, argv))
			stack_a = fill_stack(argv);

	test = stack_a;
	while (test != NULL)
	{
		ft_printf("%d\n", test->value);
		test = test->next;
	}
	sa(&stack_a);
	test = stack_a;
	while (test != NULL)
	{
		ft_printf("%d\n", test->value);
		test = test->next;
	}
	return (0);
}
