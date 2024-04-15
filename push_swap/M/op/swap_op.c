/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:08:46 by ajabri            #+#    #+#             */
/*   Updated: 2024/03/06 18:54:12 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mandatory/push_swap.h"

void	do_sa(t_list **stack_a, int flag)
{
	t_list	*tmp;

	tmp = (*stack_a)->next;
	(*stack_a)->next = tmp->next;
	tmp->next = (*stack_a);
	(*stack_a) = tmp;
	if (flag == 1)
		write(1, "sa\n", 3);
}

void	do_sb(t_list **stack_b, int flag)
{
	t_list	*tmp;

	tmp = (*stack_b)->next;
	(*stack_b)->next = tmp->next;
	tmp->next = (*stack_b);
	(*stack_b) = tmp;
	if (flag == 1)
		write(1, "sb\n", 3);
}

void	do_ss(t_list **stack_a, t_list **stack_b)
{
	do_sa(stack_a, 0);
	do_sb(stack_b, 0);
	write(1, "ss\n", 3);
}
