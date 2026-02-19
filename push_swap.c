/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:44:01 by kkweon            #+#    #+#             */
/*   Updated: 2026/02/19 18:25:41 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"
#include "push_swap.h"

int	main(int argc, char **argv)
{
	char **char_arr;
	int	*num_arr;
	int		count;

	if (argc < 2)
		print_error();
	else if (argc == 2)
	{
		char_arr = ft_split(argv[1], ' ');
		count = 0;
		while (char_arr[count])
			count++;
	}
	else
	{
		char_arr = &argv[1];
		count = argc - 1;
	}
	num_arr = num_check(argc, argv);
	
	int i;
	
	i = 0;
	t_node *a;
	a = NULL;
	t_node *new_node(int value)
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
