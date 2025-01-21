/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:03:11 by rmetge            #+#    #+#             */
/*   Updated: 2025/01/21 17:12:17 by rmetge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_to_b_first(t_listi **a, t_listi **b, int i_max)
{
	while (ft_lstisize(*b) < 2 * i_max / 4 - 1 && ft_lstisize(*a) > 3)
	{
		if ((*a)->index <= i_max / 4)
			ra(a);
		else if ((*a)->index <= 2 * i_max / 4 && (*a)->index != 1
			&& (*a)->index != i_max)
		{
			pb (a, b);
			if (((*a)->index == 1 && (*a)->index == i_max)
				|| (*a)->index <= i_max / 4 || (*a)->index > 3 * i_max / 4)
				rr(a, b);
			else if (ft_lstisize(*b) > 2 * i_max / 4 - 1 && (*a)->index == 1
				&& (*a)->index == i_max)
				rr(a, b);
			else
				rb(b);
		}
		else if ((*a)->index <= 3 * i_max / 4 && (*a)->index != 1
			&& (*a)->index != i_max)
			pb (a, b);
		else
			ra(a);
	}
}

void	ft_push_to_b(t_listi **a, t_listi **b)
{
	int	i_max;

	i_max = ft_index(a);
	ft_push_to_b_first(a, b, i_max);
	while (ft_lstisize(*b) < i_max && ft_lstisize(*a) > 3)
	{
		if ((*a)->index <= i_max / 4 && (*a)->index != 1
			&& (*a)->index != i_max)
		{
			pb (a, b);
			if ((*a)->index == 1 && (*a)->index == i_max)
				rr(a, b);
			else
				rb(b);
		}
		else if ((*a)->index <= i_max && (*a)->index != 1
			&& (*a)->index != i_max)
			pb (a, b);
		else
			ra(a);
	}
}
