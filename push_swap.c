/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:44:01 by kkweon            #+#    #+#             */
/*   Updated: 2026/02/20 13:30:40 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"
#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node *stack_a;
	t_node *stack_b;
	int	*num_arr;
	int		count;

	stack_a = NULL;
	stack_b = NULL;
	num_arr = num_check(argc, argv);
	
	int i;
	
	i = 0;
	t_node *a;
	a = NULL;
	t_node *new_node (int value)
	{
		t_node *node;

		node = (t_node *)malloc(sizeof(t_node));
		if(!node)
			return (NULL);
		node->value = value;
		node->index = -1;
		node->next = NULL;
		return node;
	}
	free(num_arr);
	return (0);
}
