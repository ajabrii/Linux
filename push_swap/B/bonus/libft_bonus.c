/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 22:55:49 by ajabri            #+#    #+#             */
/*   Updated: 2024/03/06 21:46:52 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst)
	{
		if (*lst)
		{
			last = ft_lstlast(*lst);
			last->next = new;
		}
		else
			*lst = new;
	}
}

t_list	*ft_lstnew(int content)
{
	t_list	*head;

	head = (t_list *)malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->value = content;
	head->next = NULL;
	return (head);
}

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

char	**retunr_args(t_ps *ps)
{
	int		i;
	char	*palestine;
	char	*arg;
	char	**args;

	arg = ft_strdup(ps->av[1]);
	if (!arg[0])
		ft_error("Error");
	i = 2;
	while (i < ps->ac)
	{
		if (!ps->av[i][0])
			ft_error("Error");
		palestine = ft_strjoin(arg, " ");
		free(arg);
		arg = ft_strjoin(palestine, ps->av[i]);
		free(palestine);
		i++;
	}
	args = ft_split(arg, ' ');
	return (free(arg), args);
}
