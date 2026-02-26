/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 15:27:00 by kkweon            #+#    #+#             */
/*   Updated: 2026/02/26 15:39:50 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_node **stack, int value)
{
	t_node	*new_top;

	new_top = create_node(value);
	if (!new_top)
		return ;
	new_top->next = *stack;
	*stack = new_top;
}

int	remove_top(t_node **stack)
{
	t_node	*temp;
	int		value;

	temp = *stack;
	value = temp->value;
	*stack = temp->next;
	free(temp);
	return (value);
}
