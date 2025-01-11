/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:03:08 by rmetge            #+#    #+#             */
/*   Updated: 2025/01/11 11:17:23 by rmetge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_listi	**ft_trie_2(t_listi **a)
{
	if ((*a)->content > (*a)->next->content)
		ra(a);
	return (a);
}

t_listi	**ft_trie_3(t_listi **a)
{
	int	f;
	int	s;
	int	t;

	f = (*a)->content;
	s = (*a)->next->content;
	t = (*a)->next->next->content;
	if (f > s && s > t)
	{
		sa(a);
		rra(a);
	}
	else if (f > s && s < t && t < f)
		ra(a);
	else if (f > s && s < t && t > f)
		sa(a);
	else if (f > s && s < t)
		ra(a);
	else if (f < s && s > t)
	{
		rra(a);
		if ((*a)->content > (*a)->next->content)
			sa(a);
	}
	return (a);
}

int	get_min(t_listi *a)
{
	int	min;

	min = a->content;
	while (a)
	{
		if (a->content < min)
			min = a->content;
		a = a->next;
	}
	return (min);
}

int	get_max(t_listi *a)
{
	int	max;

	max = a->content;
	while (a)
	{
		if (a->content > max)
			max = a->content;
		a = a->next;
	}
	return (max);
}

t_listi	**ft_trie_5(t_listi **a, t_listi **b)
{
	int	min;
	int	max;
	int	size_b;

	min = get_min(*a);
	max = get_max(*a);
	size_b = 0;
	while (size_b < 2)
	{
		if ((*a)->content == min || (*a)->content == max)
		{
			pb(a, b);
			size_b++;
		}
		else
			ra(a);
	}
	ft_trie_3(a);
	while (*b)
	{
		pa(a, b);
		if ((*a)->content == max)
			ra(a);
	}
	return (a);
}
