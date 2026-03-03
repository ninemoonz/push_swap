/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 23:52:46 by koodal            #+#    #+#             */
/*   Updated: 2026/03/03 23:53:13 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
