/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 13:13:32 by kkweon            #+#    #+#             */
/*   Updated: 2026/02/20 15:42:15 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node *create_node(int value)
{
    t_node *node;

    node = malloc(sizeof(t_node));
    if (!node)
        return (NULL);
    node->value = value;
    node->next = NULL;
    node->prev = NULL;
    return (node);
}

void append(t_node **head, int value)
{
    t_node *new_node;
    t_node *current_node;

    new_node = create_node(value);
    if (!*head)
    {
        *head = new_node;
        return ;
    }
    current_node = *head;
    while (current_node->next != NULL)
        current_node = current_node->next;
    current_node->next = new_node;
    new_node->prev = current_node;
}
