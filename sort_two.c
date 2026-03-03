/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 23:52:26 by koodal            #+#    #+#             */
/*   Updated: 2026/03/03 23:52:39 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_node **stack)
{
	if (!*stack || !(*stack)->next)
		return ;
	if ((*stack)->value > (*stack)->next->value)
		sa(stack);
}
