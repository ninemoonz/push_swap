/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 17:05:45 by kkweon            #+#    #+#             */
/*   Updated: 2026/02/17 16:36:23 by kkweon           ###   ########.fr       */
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

int *atoi_arr(int argc, char **argv)
{
	static int *int_arr;
	int i;
	int j;

	i = 1;
	j = 0;
	int_arr = malloc((argc - 1) * sizeof(int));
	while (argv[i] != NULL)
	{
		int_arr[j] = ft_atoi(argv[i]); 
		j++;
		i++;
	}
	return (int_arr);
}

void num_check(int argc, char **argv)
{
	int *int_arr;
	if (empty_check(argv) == 1)
	{
		if (sign_check(argv) == 1)
		{
			int_arr = atoi_arr(argc, argv);
		}
		else
		{
			ft_printf("sign check fails\n");
		}
	}
	else
		print_error();
	int i;

	i = 0;
	while (i < argc - 1)
	{
		printf("%d\n", int_arr[i]);		
		i++;
	}
}