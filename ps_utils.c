/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 13:13:32 by kkweon            #+#    #+#             */
/*   Updated: 2026/03/04 17:54:43 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	stack_size(t_node *stack)
{
	int	i;

	i = 0;
	while (stack != NULL)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

int	is_empty(t_node *stack)
{
	return (stack == NULL);
}

void	free_stack(t_node *stack)
{
	t_node	*next;

	while (stack != NULL)
	{
		next = stack->next;
		free(stack);
		stack = next;
	}
}

int	count_strarr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

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

void	ranking(t_node *stack)
{
	t_node *current_node;
	t_node *node_scan;
	int rank;

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