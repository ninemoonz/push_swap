/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intput_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 17:03:02 by koodal            #+#    #+#             */
/*   Updated: 2026/02/25 17:23:42 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	input_check(int argc)
{
	if (argc <= 1)
	{
		printf("This is too short\n");
		return (argc);
	}
	else
		printf("Doable\n");
	return (argc);
}