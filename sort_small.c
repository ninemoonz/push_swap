/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 17:29:20 by koodal            #+#    #+#             */
/*   Updated: 2026/03/16 14:14:37 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_small(t_node **stack_a, t_node **stack_b, int i)
{
	if (is_sorted(*stack_a))
		return ;
	else if (i == 2)
		sort_two(stack_a);
	else if (i == 3)
		sort_three(stack_a);
	else if (i == 4)
		sort_four(stack_a, stack_b);
	else if (i == 5)
		sort_five(stack_a, stack_b);
}
