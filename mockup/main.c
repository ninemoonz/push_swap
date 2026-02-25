/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:29:12 by koodal            #+#    #+#             */
/*   Updated: 2026/02/25 19:00:04 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	// t_node *stack_a;
	// t_node *stack_b;
	char **char_arr;
	int i;

	// stack_a = NULL;
	// stack_b = NULL;
	char_arr = NULL;
	if (argc == 1 || !argv[1][0])
		return (1);
	else if (argc == 2 && argv[1][0])
		char_arr = ft_split(argv[1], ' ');
	else if (argc >= 3)
		char_arr = argv;

	if (input_check(argc, char_arr) == 1)
		ft_printf("Fill the stack a\n");
	else
		ft_printf("fail to fill the stack\n");
	i = 0;
	while (char_arr[i])
	{
		ft_printf("%s\n", char_arr[i]);
		i++;
	}
	printf("argv ptr adr: %p\n", &argv);
	return (0);
}