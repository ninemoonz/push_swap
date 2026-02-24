/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 15:27:00 by kkweon            #+#    #+#             */
/*   Updated: 2026/02/24 15:26:44 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap (t_node **stack)
{
    int temp;
    
    while (!*stack || !(*stack)->next)
        return ;
    temp = (*stack)->value;
    (*stack)->value = (*stack)->next->value;
    (*stack)->next->value = temp;
}

void sa(t_node **stack)
{
    swap(stack);
    ft_printf("sa\n");
}

void sb(t_node **stack)
{
    swap(stack);
    ft_printf("sb\n");
}

void ss(t_node **stack_a, t_node **stack_b)
{
    swap(stack_a);
    swap(stack_b);
    ft_printf("ss\n");
}

void pa (t_node **stack_a, t_node **stack_b)
{
    t_node *top_node;

    while(!*stack_b)
        return ;
    top_node = *stack_b;
    *stack_b = top_node->next;
    if(*stack_b)
        (*stack_b)->prev = NULL;
    top_node->next = *stack_a;
    top_node->prev = NULL;
    if (*stack_a)
        (*stack_a)->prev = top_node;
    *stack_a = top_node;
    ft_printf("pa\n");
}

void pb (t_node **stack_a, t_node **stack_b)
{
    t_node *top_node;

    while(!*stack_a)
        return ;
    top_node = *stack_a;
    *stack_a = top_node->next;
    if(*stack_a)
        (*stack_a)->prev = NULL;
    top_node->next = *stack_b;
    top_node->prev = NULL;
    if (*stack_b)
        (*stack_b)->prev = top_node;
    *stack_b = top_node;
    ft_printf("pb\n");
}
