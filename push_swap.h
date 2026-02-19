/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 15:46:06 by kkweon            #+#    #+#             */
/*   Updated: 2026/02/19 16:23:53 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
#define PUSH_SWAP
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include "push_swap.h"
#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"

typedef struct s_node
{
    int value;
    int index;
    struct s_node *next;
}   t_node;

int *num_check(int argc, char **argv);
void    print_error(void);

#endif
