/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie_long.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 09:43:16 by rmetge            #+#    #+#             */
/*   Updated: 2025/01/11 12:49:44 by rmetge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_position(t_listi **lst)
{
	int	p;
	t_listi	*tmp;

	p = 0;
	tmp = (*lst);
	while (*lst)
	{
		(*lst)->position = p;
		p++;
		(*lst) = (*lst)->next;
	}
	(*lst) = tmp;
}

static int	ft_min(t_listi *lst, int min)
{
	int	new_min;
	t_listi	*tmp;

	tmp = lst;
	new_min = lst->content;
	while (new_min <= min && new_min != ft_lstilast(lst)->content)
	{

		lst = lst->next;
		new_min = lst->content;
	}
	lst = tmp;
	while (lst)
	{
		if (lst->content > min && lst->content < new_min)
			new_min = lst->content;
		lst = lst->next;
	}
	return (new_min);
}

void	ft_index(t_listi **lst)
{
	int	min;
	int	i;
	t_listi	*tmp;
	int	max;

	i = 1;
	tmp = (*lst);
	min = get_min(*lst);
	max = get_max(*lst);
	while (i <= ft_lstisize(*lst))
	{
		while ((*lst)->content != min)
			(*lst) = (*lst)->next;
		(*lst)->index = i;
		i++;
		(*lst) = tmp;
		min = ft_min(*lst, min);
	}
	while ((*lst)->content != max)
		(*lst) = (*lst)->next;
	(*lst)->index = -1;
	(*lst) = tmp;
}

void	ft_trie_100(t_listi **a, t_listi **b)
{
	int	size_b;

	size_b = 0;
	while (size_b < 2)
	{

		if ((*a)->index == 1 || (*a)->index == -1)
		{
			pb(a, b);
			size_b++;
		}
		else
			ra(a);
	}
	pb(a, b);
	ft_trie_3(b);
}
