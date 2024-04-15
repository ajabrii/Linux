/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:59:06 by ajabri            #+#    #+#             */
/*   Updated: 2024/03/06 20:43:33 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../utils/utils.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	// int index;
	int				value;
	struct s_node	*next;
}					t_list;

typedef struct s_var
{
	char			**av;
	char			**args;
	int				*tab;
	int				size;
	int				ac;
	int				range;
	int				start;
	int				end;
}					t_ps;

void				check_nbr(t_ps *ps);
void				check_args(t_ps *ps);
void				double_check(t_ps *ps);
char				**retunr_args(t_ps *ps);
void				check_errors(t_ps *ps);
void				sort_tab(t_ps *ps);
int					check_sort(t_list *stack);
void				tab(t_ps *ps);
int					count_size(char **av);
int					isbignum(t_list *stack, int nb);
void				range(t_ps *ps);

void				ft_lstadd_back(t_list **lst, t_list *new);
t_list				*ft_lstnew(int content);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);

void				do_sb(t_list **stack_b, int flag);
void				do_sa(t_list **stack_a, int flag);
void				do_ss(t_list **stack_a, t_list **stack_b);

void				do_pb(t_list **stack_a, t_list **stack_b);
void				do_pa(t_list **stack_a, t_list **stack_b);

void				do_ra(t_list **stack_a);
void				do_rb(t_list **stack_b);
void				do_rra(t_list **stack_a);
void				do_rrb(t_list **stack_b);

void				sort3(t_list **a);
void				sort5(t_list **a, t_list **b, t_ps *ps);
void				ft_sort(t_list **a, t_list **b, t_ps *ps);
void				push_to_a(t_list **a, t_list **b, t_ps *data);
#endif
