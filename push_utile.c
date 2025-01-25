/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:38:24 by rmetge            #+#    #+#             */
/*   Updated: 2025/01/25 18:03:47 by rmetge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lensplit(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_free_all(int argc, char **argv, t_listi *a, t_listi *b)
{
	if (argc == 2)
		ft_free(argv);
	ft_lsticlear(&a);
	ft_lsticlear(&b);
}

int	ft_lst_trie(t_listi *a)
{
	while (a ->next && a)
	{
		if (a->content < a->next->content)
			a = a->next;
		else
			return (1);
	}
	return (0);
}
