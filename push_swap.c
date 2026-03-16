/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:44:01 by kkweon            #+#    #+#             */
/*   Updated: 2026/03/16 17:34:39 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ranking(t_node *stack)
{
	t_node	*current_node;
	t_node	*node_scan;
	int		rank;

	current_node = stack;
	while (current_node != NULL)
	{
		rank = 0;
		node_scan = stack;
		while (node_scan != NULL)
		{
			if (node_scan->value < current_node->value)
				rank++;
			node_scan = node_scan->next;
		}
		current_node->rank = rank;
		current_node = current_node->next;
	}
}

t_node	*create_node(int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->rank = 0;
	new_node->next = NULL;
	return (new_node);
}

void	push_swap(t_node **stack_a, t_node **stack_b)
{
	int	len;

	if (is_sorted(*stack_a))
		return ;
	len = stack_size(*stack_a);
	ranking(*stack_a);
	if (len <= 5)
		sort_small(stack_a, stack_b, len);
	else
		radix(stack_a, stack_b, len);
}
