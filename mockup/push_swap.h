/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:32:01 by koodal            #+#    #+#             */
/*   Updated: 2026/02/25 17:29:13 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP
# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"
# include "push_swap.h"
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next;
	struct s_node	*prev;
}					t_node;

int					input_check(int argc);
void				push_swap(void);

#endif