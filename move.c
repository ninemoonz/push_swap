/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 15:27:00 by kkweon            #+#    #+#             */
/*   Updated: 2026/03/02 22:21:03 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_node **stack)
{
	int	temp;

	while (!*stack || !(*stack)->next)
		return ;
	temp = (*stack)->value;
	(*stack)->value = (*stack)->next->value;
	(*stack)->next->value = temp;
}

void	sa(t_node **stack)
{
	swap(stack);
	ft_printf("sa\n");
}

void	sb(t_node **stack)
{
	swap(stack);
	ft_printf("sb\n");
}

void	ss(t_node **stack_a, t_node **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
}

void	pa(t_node **stack_a, t_node **stack_b)
{
	t_node	*top_node;

	while (!*stack_b)
		return ;
	top_node = *stack_b;
	*stack_b = top_node->next;
	if (*stack_b)
		(*stack_b)->prev = NULL;
	top_node->next = *stack_a;
	top_node->prev = NULL;
	if (*stack_a)
		(*stack_a)->prev = top_node;
	*stack_a = top_node;
	ft_printf("pa\n");
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	t_node	*top_node;

	while (!*stack_a)
		return ;
	top_node = *stack_a;
	*stack_a = top_node->next;
	if (*stack_a)
		(*stack_a)->prev = NULL;
	top_node->next = *stack_b;
	top_node->prev = NULL;
	if (*stack_b)
		(*stack_b)->prev = top_node;
	*stack_b = top_node;
	ft_printf("pb\n");
}

void	reverse_rotate(t_node **stack)
{
	t_node	*new_top;
	t_node	*tmp;

	if (!*stack || !(*stack)->next)
		return ;
	tmp = *stack;
	while (tmp->next->next)
		tmp = tmp->next;
	new_top = tmp->next;
	tmp->next = NULL;
	new_top->next = *stack;
	*stack = new_top;
}

void	rra(t_node **stack_a)
{
	reverse_rotate(stack_a);
	ft_printf("rra\n");
}

void	rrb(t_node **stack_b)
{
	reverse_rotate(stack_b);
	ft_printf("rrb\n");
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_printf("rrr\n");
}