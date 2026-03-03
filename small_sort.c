/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 13:53:13 by kkweon            #+#    #+#             */
/*   Updated: 2026/03/03 14:02:45 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_node **stack)
{
	if (!*stack || !(*stack)->next)
		return ;
	while ((*stack)->next)
	{
		stack = (*stack)->next;
		if ((*stack)->value > (*stack)->next->value)
			return (0);
	}
	return (1);
}

void	sort_two(t_node **stack)
{
	if (!*stack || !(*stack)->next)
		return ;
	if ((*stack)->value > (*stack)->next->value)
		sa(&stack);
}

void	sort_three(t_node **stack)
{
	if (!*stack || !(*stack)->next)
		return ;
	if (is_sorted(&stack))
		return ;
}