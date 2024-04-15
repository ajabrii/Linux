/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:58:53 by ajabri            #+#    #+#             */
/*   Updated: 2024/04/15 12:42:51 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	ps->start = 0;
	ps->args = retunr_args(ps);
	ps->size = count_size(ps->args);
	tab(ps);
	check_errors(ps);
	fill_stack_a(stack_a, ps);
	sort_tab(ps);
	range(ps);
	ps->end = ps->range;
	free(ps->tab);
	int j = 0;
	while (j < ps->size)
	{
		free(ps->args[j]);
		j++;
	}
	free(ps->args);
}

void	start_sorting(t_list **stack_a, t_list **stack_b, t_ps *ps)
{
	if (ps->size == 2)
	{
		if ((*stack_a)->value > (*stack_a)->next->value)
			do_sa(stack_a, 1);
	}
	else if (ps->size == 3)
		sort3(stack_a);
	else if (ps->size <= 5)
		sort5(stack_a, stack_b, ps);
	else
	{
		ft_sort(stack_a, stack_b, ps);
		push_to_a(stack_a, stack_b, ps);
	}
}

void    free_stack(t_list **a, t_list **b)
{
    t_list    *c;

    while (*a)
    {
        c = (*a)->next;
        free(*a);
        *a = c;
    }
    if (*b)
    {
        while (*b)
        {
            c = (*b)->next;
            free(*b);
            *b = c;
        }
    }
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
	start_sorting(&stack_a, &stack_b, &ps);
	free_stack(&stack_a, &stack_b);
	// system("leaks push_swap");
}
