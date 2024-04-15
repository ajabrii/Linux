/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:27:45 by ajabri            #+#    #+#             */
/*   Updated: 2024/03/05 21:03:28 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mandatory/push_swap.h"

void	push(t_list **stack, int value)
{
	t_list	*new;

	new = ft_lstnew(value);
	new->next = (*stack);
	(*stack) = new;
}

void	pop(t_list **stack)
{
	t_list	*tmp;

	tmp = *stack;
	(*stack) = (*stack)->next;
	free(tmp);
}

void	do_pa(t_list **stack_a, t_list **stack_b)
{
	if (!stack_b)
		return ;
	push(stack_a, (*stack_b)->value);
	pop(stack_b);
	write(1, "pa\n", 3);
}

void	do_pb(t_list **stack_a, t_list **stack_b)
{
	if (!stack_a)
		return ;
	push(stack_b, (*stack_a)->value);
	pop(stack_a);
	write(1, "pb\n", 3);
}
