/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coup.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:34:56 by rmetge            #+#    #+#             */
/*   Updated: 2025/01/21 17:02:11 by rmetge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_coup(t_listi **a, t_listi **b)
{
	int		coup;
	int		size;
	t_listi	*tmpa;
	t_listi	*tmpb;
	int		i;

	tmpa = (*a);
	tmpb = (*b);
	i = 0;
	size = ft_lstisize(*b);
	ft_position(b);
	while (*b)
	{
		coup = 0;
		if ((*b)->position > size / 2)
			coup = size - ((*b)->position);
		else
			coup = (*b)->position;
		coup += ft_calculcoup(a, b);
		(*a) = tmpa;
		(*b)->coup = coup + 1;
		(*b) = (*b)->next;
	}
	(*b) = tmpb;
}

int	ft_coup_min(t_listi *b)
{
	int	coup_min;

	coup_min = (b)->coup;
	while (b)
	{
		if ((b)->coup < coup_min)
			coup_min = (b)->coup;
		(b) = (b)->next;
	}
	return (coup_min);
}

void	ft_moovrb(t_listi **a, t_listi **b, int val, int coup_min)
{
	while ((*b)->coup > coup_min)
	{
		if (val < (*a)->index && val > ft_lstilast(*a)->index)
			rrb(b);
		else if ((*a)->coupa == 1)
			rrr(a, b);
		else
			rrb(b);
	}
}

void	ft_moovrrb(t_listi **a, t_listi **b, int val, int coup_min)
{
	while ((*b)->coup > coup_min)
	{
		if (val < (*a)->index && val > ft_lstilast(*a)->index)
			rb(b);
		else if ((*a)->coupa == 0)
			rr(a, b);
		else
			rb(b);
	}
}

void	ft_mouvement(t_listi **a, t_listi **b)
{
	int		coup_min;
	t_listi	*tmpb;
	int		pos;
	int		val;

	tmpb = (*b);
	ft_coup(a, b);
	coup_min = ft_coup_min(*b);
	pos = (*b)->position;
	while ((*b)->coup > coup_min && (*b))
		(*b) = (*b)->next;
	val = (*b)->index;
	pos = (*b)->position;
	ft_ra_rra(a, b);
	(*b) = tmpb;
	if (pos > ft_lstisize(*b) / 2)
		ft_moovrb(a, b, val, coup_min);
	else
		ft_moovrrb(a, b, val, coup_min);
	ft_ra_rra(a, b);
	ft_moova(a, b, coup_min);
}
