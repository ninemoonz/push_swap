/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:44:01 by kkweon            #+#    #+#             */
/*   Updated: 2026/02/18 16:33:38 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"
#include "push_swap.h"

int	main(int argc, char **argv)
{
	char	**num_arr;
	int		count;

	if (argc < 2)
		print_error();
	else if (argc == 2)
	{
		num_arr = ft_split(argv[1], ' ');
		count = 0;
		while (num_arr[count])
			count++;
	}
	else
	{
		num_arr = &argv[1];
		count = argc - 1;
	}
	printf("%d\n", num_check(argc, argv));
	return (0);
}
