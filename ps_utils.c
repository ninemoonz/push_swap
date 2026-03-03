/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 13:13:32 by kkweon            #+#    #+#             */
/*   Updated: 2026/03/03 14:45:27 by kkweon           ###   ########.fr       */
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
	t_node *next;

	while (stack != NULL)
	{
		next = stack->next;
		free(stack);
		stack = next;
	}
}