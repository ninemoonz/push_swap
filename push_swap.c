/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:44:01 by kkweon            #+#    #+#             */
/*   Updated: 2026/02/12 15:44:46 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main (int argc, char **argv)
{
	char **input;

	if (argc < 2) // no arguments
		return (1);
	else if (argc == 2) // when the arguments are passed in as a string ./out "1 2 3 4 5"
	{
		input = ft_split(argv[1], ' ');

	}
	else // when the arguments are passed in as multiple arguments ./out 1 2 3 4 5
	{

	}
	return (0);
}
