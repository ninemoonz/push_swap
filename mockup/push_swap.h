/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:32:01 by koodal            #+#    #+#             */
/*   Updated: 2026/02/25 13:37:17 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
#define PUSH_SWAP
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include "push_swap.h"
#include "../../codam_projects/libft/libft.h"
#include "../../codam_projects/ft_printf/ft_printf.h"

typedef struct s_node
{
    int value;
    struct s_node *next;
    struct s_node *prev;
} t_node;

#endif