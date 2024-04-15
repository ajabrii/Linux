/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:55:24 by ajabri            #+#    #+#             */
/*   Updated: 2024/04/15 13:08:43 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	fill_stack_a(t_list **stack_a, t_ps *ps)
{
	int	i;

	i = 0;
	while (i < ps->size)
	{
		ft_lstadd_back(stack_a, ft_lstnew(ps->tab[i]));
		i++;
	}
	if (check_sort(*stack_a))
		exit(0);
}

void	get_init(t_ps *ps, int argc, char **argv, t_list **stack_a)
{
	ps->ac = argc;
	ps->av = argv;
	ps->args = retunr_args(ps);
	ps->size = count_size(ps->args);
	tab(ps);
	check_errors(ps);
	fill_stack_a(stack_a, ps);
	ps->end = ps->range;
}

void ft_do_op(char *op, t_list **a, t_list **b)
{
	if (!ft_strncmp(op, "pa\n", 3))
		do_pa(a,b, 0);
	else if (!ft_strncmp(op, "pb\n", 3))
		do_pb(a,b, 0);
	else if (!ft_strncmp(op, "ra\n", 3))
		do_ra(a, 0);
	else if (!ft_strncmp(op, "rb\n", 3))
		do_rb(b, 0);
	else if (!ft_strncmp(op, "rr\n", 3))
		do_rr(a, b, 0);
	else if (!ft_strncmp(op, "rra\n", 4))
		do_rra(a, 0);
	else if (!ft_strncmp(op, "rrb\n", 4))
		do_rrb(b, 0);
	else if (!ft_strncmp(op, "rrr\n", 4))
		do_rrr(a,b, 0);
	else if (!ft_strncmp(op, "sa\n", 3))
		do_sa(a, 0);
	else if (!ft_strncmp(op, "sb\n", 3))
		do_sb(b, 0);
	else if (!ft_strncmp(op, "ss\n", 3))
		do_ss(a,b, 0);
	else
		ft_error("Error");
}

void read_op(t_list **a, t_list **b)
{
    char *op;

    while (1)
    {
        op = get_next_line(0);
        if (op == NULL)
            break ;
        ft_do_op(op,a,b);
        free(op);
    }
    if (check_sort(*a) && !*b)
		write(1,"\033[1;32mOK\033\n[0m", 11);
	else
		write(1,"\033[1;31mKO\033\n[0m", 11);
}
int	main(int argc, char **argv)
{
	t_ps	ps;
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		ft_error("ERROR 1");
	get_init(&ps, argc, argv, &stack_a);
	read_op(&stack_a, &stack_b);
}
