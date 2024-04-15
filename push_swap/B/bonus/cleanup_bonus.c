/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleanup_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:44:14 by ajabri            #+#    #+#             */
/*   Updated: 2024/04/15 18:44:37 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	free_stack(t_list **a, t_list **b)
{
	t_list	*c;

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
