/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_lst.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 11:09:02 by rmetge            #+#    #+#             */
/*   Updated: 2025/01/09 10:46:05 by rmetge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstisize(t_listi *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

t_listi	*ft_lstinew(int content)
{
	t_listi	*lst;

	lst = (t_listi *) malloc(sizeof(t_listi));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}

void	ft_lsticlear(t_listi **lst)
{
	t_listi	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		free (*lst);
		*lst = tmp;
	}
}

void	ft_lstiadd_back(t_listi **lst, t_listi *new)
{
	if (!new || !lst)
		return ;
	if (*lst)
		ft_lstilast(*lst)->next = new;
	else
		*lst = new;
}

void	ft_lstiadd_front(t_listi **lst, t_listi *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
