/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_helper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 13:53:13 by kkweon            #+#    #+#             */
/*   Updated: 2026/03/03 23:52:15 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_node *stack)
{
	if (!stack)
		return (1);
	while (stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	sort_two(t_node **stack)
{
	if (!*stack || !(*stack)->next)
		return ;
	if ((*stack)->value > (*stack)->next->value)
		sa(stack);
}

void	sort_three_helper(t_node **stack, int i, int j, int k)
{
	if (i < j && j > k && i < k)
	{
		sa(stack);
		ra(stack);
	}
	else if (i > j && j < k && i < k)
		sa(stack);
	else if (i < j && j > k && i > k)
		rra(stack);
	else if (i > j && j < k && i > k)
		ra(stack);
	else if (i > j && j > k && i > k)
	{
		sa(stack);
		rra(stack);
	}
}

void	sort_three(t_node **stack)
{
	int	i;
	int	j;
	int	k;

	if (!*stack || !(*stack)->next || !(*stack)->next->next)
		return ;
	if (is_sorted(*stack))
		return ;
	i = (*stack)->value;
	j = (*stack)->next->value;
	k = (*stack)->next->next->value;
	sort_three_helper(stack, i, j, k);
}
