/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 16:01:50 by kkweon            #+#    #+#             */
/*   Updated: 2026/03/03 23:48:19 by koodal           ###   ########.fr       */
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
