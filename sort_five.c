/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 23:51:09 by koodal            #+#    #+#             */
/*   Updated: 2026/03/04 13:43:36 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_node **stack_a, t_node **stack_b)
{
	ranking(*stack_a);
	while ((*stack_b) == NULL || (*stack_b)->next == NULL)
	{
		if ((*stack_a)->rank == 0 || (*stack_a)->rank == 1)
			pb(stack_a, stack_b);
		else
			ra(stack_a);
	}
	if ((*stack_b)->rank == 0)
		sb(stack_b);
	sort_three(stack_a);
	while ((*stack_b) != NULL)
		pa(stack_a, stack_b);
}