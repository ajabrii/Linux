/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:20:04 by ajabri            #+#    #+#             */
/*   Updated: 2024/03/06 20:29:34 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort3(t_list **a)
{
	if (!*a || !(*a)->next)
		return ;
	if ((*a)->value > (*a)->next->value
		&& (*a)->value > (*a)->next->next->value)
		do_ra(a);
	else if ((*a)->next->value > (*a)->value
		&& (*a)->next->value > (*a)->next->next->value)
		do_rra(a);
	if ((*a)->value > (*a)->next->value)
		do_sa(a, 1);
}

int	smaln(t_list *stack, int num)
{
	int	i;

	i = 0;
	while (stack)
	{
		if (stack->value == num)
			break ;
		i++;
		stack = stack->next;
	}
	return (i);
}

void	sort5(t_list **a, t_list **b, t_ps *ps)
{
	int	i;

	i = 0;
	while (ps->size > 3)
	{
		if (smaln(*a, ps->tab[i]) < ps->size / 2)
			do_ra(a);
		else
			do_rra(a);
		if (smaln(*a, ps->tab[i]) == 0)
		{
			do_pb(a, b);
			i++;
			ps->size--;
		}
	}
	sort3(a);
	while (*b)
		do_pa(a, b);
}

void	push_to_a(t_list **a, t_list **b, t_ps *data)
{
	int	i;

	data->size = ft_lstsize(*b);
	i = ft_lstsize(*b) - 1;
	while (data->size > 0)
	{
		if (isbignum(*b, data->tab[i]) <= (data->size / 2) && isbignum(*b,
				data->tab[i]) != 0)
			do_rb(b);
		else
			do_rrb(b);
		if (isbignum(*b, data->tab[i]) == 0)
		{
			do_pa(a, b);
			data->size--;
			i--;
		}
	}
}
