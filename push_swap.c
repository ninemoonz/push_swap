/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:44:01 by kkweon            #+#    #+#             */
/*   Updated: 2026/02/20 16:17:48 by kkweon           ###   ########.fr       */
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
	i = 0;
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

	stack_a = NULL;
	stack_b = NULL;
	if (num_check(argc, argv))
			stack_a = fill_stack(argv);

	while (stack_a != NULL)
	{
		stack_a = stack_a->next;
		printf("%d\n", stack_a->value);
	}
	return (0);
}
