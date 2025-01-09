/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:03:08 by rmetge            #+#    #+#             */
/*   Updated: 2025/01/09 16:44:21 by rmetge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_listi	**ft_trie_2(t_listi **l1)
{
	if ((*l1)->content > (*l1)->next->content)
		ra(l1);
	return (l1);
}

t_listi	**ft_trie_3(t_listi **l1)
{
	int	f;
	int	s;
	int	t;

	f = (*l1)->content;
	s = (*l1)->next->content;
	t = (*l1)->next->next->content;
	if (f > s && s > t)
	{
		sa(l1);
		rra(l1);
	}
	else if (f > s && s < t && t < f)
		ra(l1);
	else if (f > s && s < t && t > f)
		sa(l1);
	else if (f > s && s < t)
		ra(l1);
	else if (f < s && s > t)
	{
		rra(l1);
		if ((*l1)->content > (*l1)->next->content)
			sa(l1);
	}
	return (l1);
}

t_listi	**ft_trie_5(t_listi **l1, t_listi **l2)
{
	int	min;
	int	i;

	min = (*l1)->content;
	i = 0;
	while ()

	return (l1);
}