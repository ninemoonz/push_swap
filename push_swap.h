/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 15:46:06 by kkweon            #+#    #+#             */
/*   Updated: 2026/03/02 15:02:45 by kkweon           ###   ########.fr       */
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
void				split_free(char **arr_malloc, int i);
t_node				*create_node(int value);
void				push(t_node **stack, int value);
int					remove_top(t_node **stack);
int					stack_size(t_node *stack);
int					is_empty(t_node *stack);
void				free_stack(t_node *stack);
void				split_free(char **arr_malloc, int i);
int					count_strarr(char **arr);

#endif
