/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 17:05:45 by kkweon            #+#    #+#             */
/*   Updated: 2026/02/17 15:57:30 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int empty_check(char **argv)
{
    int i;

    i = 1;
    while (argv[i] != NULL)
    {
        if (argv[i][0] == '\0')
		{
			return (0);
		}
        i++;
    }
	return (1);
}

int sign_check(char **argv)
{
    int i;
    int j;

    i = 1;
    j = 0;
    while (argv[i] != NULL)
    {
        if ((argv[i][j] == '+' || argv[i][j] == '-') && (argv[i][j + 1] == '+' || argv[i][j + 1] == '-'))
			return (0);
        i++;
    }
	return (1);
}

int double_check(char **argv)
{
    int i;
    int j;

    i = 1;
    while (argv[i] != NULL)
    {
        j = i + 1;
        while(argv[j] != NULL)
        {
            if (*argv[i] == *argv[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

void num_check(char **argv)
{
	if (empty_check(argv) == 1)
	{
		ft_printf("emtpy check passes\n");
		if (sign_check(argv) == 1)
		{
			ft_printf("sign check passes!\n");
		}
		else
		{
			ft_printf("sign check fails\n");
		}
	}
	else
		print_error();
}