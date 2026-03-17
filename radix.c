/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 14:10:17 by kkweon            #+#    #+#             */
/*   Updated: 2026/03/17 17:31:42 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix(t_node **stack_a, t_node **stack_b, int len)
{
	int	i;
	int	j;
	int	max_bits;

	max_bits = get_max_bits(len - 1);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < len)
		{
			if ((((*stack_a)->rank >> i & 1)) == 0)
				pb(stack_a, stack_b);
			else
				ra(stack_a);
			j++;
		}
		while (*stack_b)
			pa(stack_a, stack_b);
		i++;
	}
}
