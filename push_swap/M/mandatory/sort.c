/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:19:27 by ajabri            #+#    #+#             */
/*   Updated: 2024/03/06 20:49:45 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	range(t_ps *ps)
{
	if (ps->size >= 6 && ps->size <= 16)
		ps->range = 8;
	else if (ps->size >= 17 && ps->size <= 100)
		ps->range = 13;
	else if (ps->size > 100 && ps->size <= 500)
		ps->range = 29;
	else
		ps->range = 40;
}

int	isbignum(t_list *stack, int nb)
{
	int	index;

	index = 0;
	while (stack)
	{
		if (stack->value == nb)
			break ;
		index++;
		stack = stack->next;
	}
	return (index);
}

int	find_index(t_list *stack, t_ps *data, int start, int end)
{
	int	i;

	i = 0;
	while (stack)
	{
		if (stack->value <= data->tab[start] || stack->value <= data->tab[end])
			break ;
		i++;
		stack = stack->next;
	}
	return (i);
}

void	ft_sort(t_list **a, t_list **b, t_ps *ps)
{
	while (*a)
	{
		if (ps->end >= ps->size - 1)
			ps->end = ps->size - 1;
		if ((*a)->value >= ps->tab[ps->start]
			&& (*a)->value <= ps->tab[ps->end])
		{
			do_pb(a, b);
			if (ft_lstsize(*b) >= 2 && (*b)->value < (*b)->next->value)
				do_sb(b, 1);
			ps->start++;
			ps->end++;
		}
		else if ((*a)->value < ps->tab[ps->start])
		{
			do_pb(a, b);
			do_rb(b);
			ps->start++;
			ps->end++;
		}
		else if (find_index(*a, ps, ps->start, ps->end) >= ft_lstsize(*a) / 2)
			do_rra(a);
		else
			do_ra(a);
	}
}
