/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 17:03:02 by koodal            #+#    #+#             */
/*   Updated: 2026/02/26 00:11:24 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*input_check(int argc, char **argv)
{
	char **char_arr;
	int *int_arr;

	if (argc == 1 || !argv[1][0])
		error_exit();
	else if (argc == 2 && argv[1][0])
		char_arr = ft_split(argv[1], ' ');
	return (argc);
}