/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverce_r_op_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:15:38 by ajabri            #+#    #+#             */
/*   Updated: 2024/03/06 21:44:51 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus/push_swap_bonus.h"

void	do_rra(t_list **stack_a, int flag)
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
	if (flag == 1)
		write(1, "rra\n", 4);
}

void	do_rrb(t_list **stack_b, int flag)
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
	if (flag == 1)
		write(1, "rrb\n", 4);
}

void do_rrr(t_list **a, t_list **b, int flag)
{
	if (!*a || !*b)
		return ;
	do_rra(a, 0);
	do_rrb(b, 0);
	if (flag == 1)
		write(1,"rrr\n",4);
}
