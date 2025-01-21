/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coup_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:31:30 by rmetge            #+#    #+#             */
/*   Updated: 2025/01/21 17:01:51 by rmetge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_posa(t_listi *a, t_listi *b)
{
	if (a->index > b->index && b->index > ft_lstilast(a)->index)
		return (a->position);
	while (a->index < b->index || a->index > b->index)
	{
		if (a->index < b->index)
		{
			if (a->next->index > b->index)
			{
				a = a->next;
				return (a->position);
			}
		}
		a = a->next;
	}
	return (a->position);
}

int	ft_calculcoup(t_listi **a, t_listi **b)
{
	int	pos;
	int	coup;

	ft_position(a);
	pos = ft_posa(*a, *b);
	if (pos > ft_lstisize(*a) / 2)
		coup = ft_lstisize(*a) - pos;
	else
		coup = pos;
	return (coup);
}

void	ft_coupa(t_listi **a, int c)
{
	t_listi	*tmp;

	tmp = (*a);
	while (ft_lstisize(*a) > 0)
	{
		(*a)->coupa = c;
		(*a) = (*a)->next;
	}
	(*a) = tmp;
}

void	ft_ra_rra(t_listi **a, t_listi **b)
{
	int		pos;
	t_listi	*tmp;

	tmp = (*a);
	ft_position(a);
	pos = ft_posa(*a, *b);
	if (pos >= ft_lstisize(*a) / 2)
		ft_coupa(a, 1);
	else
		ft_coupa(a, 0);
	(*a) = tmp;
}

void	ft_moova(t_listi **a, t_listi **b, int coup_min)
{
	int	size;

	size = ft_lstisize(*a) + ft_lstisize(*b);
	while ((*b)->coup == coup_min)
	{
		if ((*b)->index < (*a)->index && (*b)->index > ft_lstilast(*a)->index)
		{
			pa(a, b);
			break ;
		}
		else if ((*a)->coupa == 0)
			ra(a);
		else if ((*a)->coupa == 1)
			rra(a);
		if (ft_lstisize(*b) == 0)
			break ;
	}
}
