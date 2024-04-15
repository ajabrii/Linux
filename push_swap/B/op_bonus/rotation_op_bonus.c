/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation_op_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:14:44 by ajabri            #+#    #+#             */
/*   Updated: 2024/03/06 21:44:55 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus/push_swap_bonus.h"

void	do_ra(t_list **stack_a, int flag)
{
	t_list	*first;
	t_list	*second;
	t_list	*last;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	first = *stack_a;
	second = (*stack_a)->next;
	last = ft_lstlast(*stack_a);
	last->next = first;
	first->next = NULL;
	(*stack_a) = second;
	if (flag == 1)
		write(1, "ra\n", 3);
}

void	do_rb(t_list **stack_b, int flag)
{
	t_list	*first;
	t_list	*second;
	t_list	*last;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	first = *stack_b;
	second = (*stack_b)->next;
	last = ft_lstlast(*stack_b);
	last->next = first;
	first->next = NULL;
	(*stack_b) = second;
	if (flag == 1)
		write(1, "rb\n", 3);
}

void do_rr(t_list **stack_a, t_list **stack_b, int flag)
{
	if (!*stack_a || !*stack_b)
		return ;
	do_ra(stack_a, 0);
	do_rb(stack_b, 0);
	if (flag == 1)
		write(1,"rr\n",3);
}
