/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 15:46:06 by kkweon            #+#    #+#             */
/*   Updated: 2026/03/03 17:38:51 by kkweon           ###   ########.fr       */
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
	int				rank;
	struct s_node	*next;
}					t_node;

int					main(int argc, char **argv);
int					*num_check(int argc, char **argv);
void				print_error(void);
void				split_free(char **arr_malloc, int i);
t_node				*create_node(int value);

int					remove_top(t_node **stack);
void				swap(t_node **stack);
void				sa(t_node **stack_a);
void				sb(t_node **stack_b);
void				ss(t_node **stack_a, t_node **stack_b);
void				push(t_node **stack, int value);
void				pa(t_node **stack_a, t_node **stack_b);
void				pb(t_node **stack_a, t_node **stack_b);
void				rotate(t_node **stack);
void				ra(t_node **stack_a);
void				rb(t_node **stack_b);
void				rr(t_node **stack_a, t_node **stack_b);
void				reverse_rotate(t_node **stack);
void				rra(t_node **stack_a);
void				rrb(t_node **stack_b);
void				rrr(t_node **stack_a, t_node **stack_b);

int					stack_size(t_node *stack);
int					is_empty(t_node *stack);
void				free_stack(t_node *stack);
void				split_free(char **arr_malloc, int i);
int					count_strarr(char **arr);

int					is_sorted(t_node *stack);
void				sort_two(t_node **stack);
void				sort_three(t_node **stack);
void				small_sort(t_node **stack, int count);
void				sort_it(t_node **stack, int count);

void				ranking(t_node *stack);

#endif
