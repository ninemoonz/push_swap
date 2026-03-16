/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 23:52:46 by koodal            #+#    #+#             */
/*   Updated: 2026/03/16 17:35:39 by kkweon           ###   ########.fr       */
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
	i = (*stack)->rank;
	j = (*stack)->next->rank;
	k = (*stack)->next->next->rank;
	sort_three_helper(stack, i, j, k);
}
