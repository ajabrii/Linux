/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 21:22:45 by ajabri            #+#    #+#             */
/*   Updated: 2024/03/06 21:36:55 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	check_nbr(t_ps *ps)
{
	int	i;
	int	p;

	i = 0;
	while (i < ps->size)
	{
		p = 0;
		if (ps->args[i][p] == '-' || ps->args[i][p] == '+')
			p++;
		if (!ps->args[i][p])
			ft_error("error");
		while (ps->args[i][p])
		{
			if (!ft_isdigit(ps->args[i][p]))
			{
				ft_error("err");
			}
			p++;
		}
		i++;
	}
}

void	double_check(t_ps *ps)
{
	int	i;
	int	j;

	i = 0;
	while (i < ps->size)
	{
		j = i + 1;
		while (j < ps->size)
		{
			if (ps->tab[i] == ps->tab[j])
				ft_error("ERROR");
			j++;
		}
		i++;
	}
}

static int	check_sp(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (!str[i])
		return (0);
	return (1);
}

void	check_args(t_ps *ps)
{
	int	i;

	i = 0;
	while (ps->av[i])
	{
		if (!check_sp(ps->av[i]))
			ft_error("ERROR");
		i++;
	}
}

void	check_errors(t_ps *ps)
{
	check_args(ps);
	check_nbr(ps);
	double_check(ps);
}
