/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation_op.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:14:44 by ajabri            #+#    #+#             */
/*   Updated: 2024/03/05 21:03:28 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mandatory/push_swap.h"

void	do_ra(t_list **stack_a)
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
	write(1, "ra\n", 3);
}

void	do_rb(t_list **stack_b)
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
	write(1, "rb\n", 3);
}

