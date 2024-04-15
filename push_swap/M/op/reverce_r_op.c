/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverce_r_op.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:15:38 by ajabri            #+#    #+#             */
/*   Updated: 2024/03/05 21:03:28 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mandatory/push_swap.h"

void	do_rra(t_list **stack_a)
{
	t_list	*last;
	t_list	*tmp;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	last = (*stack_a);
	while (last->next != NULL)
	{
		tmp = last;
		last = last->next;
	}
	tmp->next = NULL;
	last->next = *stack_a;
	*stack_a = last;
	write(1, "rra\n", 4);
}

void	do_rrb(t_list **stack_b)
{
	t_list	*last;
	t_list	*tmp;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	last = (*stack_b);
	while (last->next != NULL)
	{
		tmp = last;
		last = last->next;
	}
	tmp->next = NULL;
	last->next = *stack_b;
	*stack_b = last;
	write(1, "rrb\n", 4);
}
