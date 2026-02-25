/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:29:12 by koodal            #+#    #+#             */
/*   Updated: 2026/02/25 17:55:12 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node *stack_a;
	t_node *stack_b;
	char **char_stack;
	int i;

	if (argc == 1 || !argv[1][0])
		return (1);
	if (argc == 2 && argv[1][0])
		char_stack = ft_split(argv[1], ' ');

	i = 0;
	while (char_stack[i])
	{
		ft_printf("%s\n", char_stack[i]);
		i++;
	}
	return (0);
}