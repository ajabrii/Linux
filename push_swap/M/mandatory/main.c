/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:58:53 by ajabri            #+#    #+#             */
/*   Updated: 2024/03/06 20:59:01 by ajabri           ###   ########.fr       */
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
	// system("leaks push_swap");
}
