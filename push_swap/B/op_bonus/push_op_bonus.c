/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_op_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:27:45 by ajabri            #+#    #+#             */
/*   Updated: 2024/03/06 21:44:11 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus/push_swap_bonus.h"

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

void	do_pa(t_list **stack_a, t_list **stack_b, int flag)
{
	if (!*stack_b)
		return ;
	push(stack_a, (*stack_b)->value);
	pop(stack_b);
	if (flag == 1)
		write(1, "pa\n", 3);
}

void	do_pb(t_list **stack_a, t_list **stack_b, int flag)
{
	if (!*stack_a)
		return ;
	push(stack_b, (*stack_a)->value);
	pop(stack_a);
	if (flag == 1)
		write(1, "pb\n", 3);
}
