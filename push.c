/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 16:55:26 by kkweon            #+#    #+#             */
/*   Updated: 2026/03/03 16:56:05 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	remove_top(t_node **stack)
{
	t_node	*tmp;
	int		value;

	tmp = *stack;
	value = tmp->value;
	*stack = tmp->next;
	free(tmp);
	return (value);
}

void	push(t_node **stack, int value)
{
	t_node	*new_top;

	new_top = create_node(value);
	if (!new_top)
		return ;
	new_top->next = *stack;
	*stack = new_top;
}

void	pa(t_node **stack_a, t_node **stack_b)
{
	if (!*stack_b)
		return ;
	push(stack_a, remove_top(stack_b));
	ft_printf("pa\n");
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	if (!*stack_a)
		return ;
	push(stack_b, remove_top(stack_a));
	ft_printf("pb\n");
}
