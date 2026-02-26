/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 15:46:06 by kkweon            #+#    #+#             */
/*   Updated: 2026/02/26 13:25:44 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP
# include "./ft_printf/ft_printf.h"
# include "./libft/libft.h"
# include "push_swap.h"
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}					t_node;

int					main(int argc, char **argv);
int					*num_check(int argc, char **argv);
void				print_error(void);
void				append(t_node **head, int value);
void				swap(t_node **stack);
void				sa(t_node **stack);
void				sb(t_node **stack);
void				ss(t_node **stack_a, t_node **stack_b);
void				pa(t_node **stack_a, t_node **stack_b);
void				pb(t_node **stack_a, t_node **stack_b);

#endif
