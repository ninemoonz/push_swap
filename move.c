/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 15:27:00 by kkweon            #+#    #+#             */
/*   Updated: 2026/03/02 18:28:44 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	remove_top(t_node **stack)
{
	t_node	*tmp;
	int		value;

	tmp = *stack;
	value = tmp->value;
	*stack = tmp->next;
	free(tmp);
	return (value);
}

void	swap(t_node **stack)
{
	int	tmp;

	if (!*stack || !(*stack)->next)
		return ;
	tmp = (*stack)->value;
	(*stack)->value = (*stack)->next->value;
	(*stack)->next->value = tmp;
}

void	sa(t_node **stack_a)
{
	swap(stack_a);
	ft_printf("sa\n");
}

void	sb(t_node **stack_b)
{
	swap(stack_b);
	ft_printf("sb\n");
}

void	ss(t_node **stack_a, t_node **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
}

void	push(t_node **stack, int value)
{
	t_node	*new_top;

	new_top = create_node(value);
	if (!new_top)
		return ;
	new_top->next = *stack;
	*stack = new_top;
}

void	pa(t_node **stack_a, t_node **stack_b)
{
	if (!*stack_b)
		return ;
	push(stack_a, remove_top(stack_b));
	ft_printf("pa\n");
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	if (!*stack_a)
		return ;
	push(stack_b, remove_top(stack_a));
	ft_printf("pb\n");
}

void	rotate(t_node **stack)
{
	t_node	*tmp;
	t_node	*last_node;

	if (!*stack || !(*stack)->next)
		return ;
	last_node = *stack;
	*stack = last_node->next;
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = last_node;
	last_node->next = NULL;
}

void	ra(t_node **stack_a)
{
	rotate(stack_a);
	ft_printf("ra\n");
}

void	rb(t_node **stack_b)
{
	rotate(stack_b);
	ft_printf("rb\n");
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_printf("rr\n");
}

void	reverse_rotate(t_node **stack)
{
	t_node	*tmp;
	t_node	*first_node;

	if (!*stack || !(*stack)->next)
		return ;
	tmp = *stack;
	while (tmp->next->next)
		tmp = tmp->next;
	first_node = tmp;
	*stack = first_node;
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