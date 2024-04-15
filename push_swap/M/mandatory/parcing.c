/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:12:57 by ajabri            #+#    #+#             */
/*   Updated: 2024/03/06 20:26:32 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_size(char **av)
{
	int	size;

	size = 0;
	while (av[size])
		size++;
	return (size);
}

void	sort_tab(t_ps *ps)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < ps->size - 1)
	{
		if (ps->tab[i] > ps->tab[i + 1])
		{
			tmp = ps->tab[i];
			ps->tab[i] = ps->tab[i + 1];
			ps->tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}

int	check_sort(t_list *stack)
{
	if (!stack)
		return (0);
	while (stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	tab(t_ps *ps)
{
	int		index;
	long	g;

	index = 0;
	ps->tab = malloc((ps->ac - 1) * sizeof(int));
	if (!ps->tab)
		ft_error("ERROR 4");
	while (ps->args[index])
	{
		g = ft_atoi(ps->args[index]);
		if (g > 2147483647 || g < -2147483648)
			ft_error("Error");
		ps->tab[index] = g;
		index++;
	}
}
