/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 09:16:51 by rmetge            #+#    #+#             */
/*   Updated: 2025/01/08 15:24:05 by rmetge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_listi **a)
{
	t_listi	*node;

	if (ft_lstisize(*a) < 2)
		return ;
	node = (*a)->next;
	(*a)->next = (*a)->next->next;
	ft_lstiadd_front(a, node);
}

void	sb(t_listi **b)
{
	t_listi	*node;

	if (ft_lstisize(*b) < 2)
		return ;
	node = (*b)->next;
	(*b)->next = (*b)->next->next;
	ft_lstiadd_front(b, node);
}

void	ss(t_listi **a, t_listi **b)
{
	sa(a);
	sb(b);
}

// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// void	print(int content)
// {
// 	ft_printf("%i " ,content);
// }

// int	main()
// {
// 	t_listi *mylista;
// 	t_listi *mylistb;

// 	mylista = ft_lstinew(10);
// 	if (!mylista)
// 		return 1;
// 	ft_lstiadd_back(&mylista, ft_lstinew(11));
// 	ft_lstiadd_back(&mylista, ft_lstinew(12));
// 	ft_lstiadd_back(&mylista, ft_lstinew(13));
// 	ft_lstiadd_back(&mylista, ft_lstinew(14));
// 	mylistb = ft_lstinew(15);
// 	if (!mylistb)
// 		return 1;
// 	ft_lstiadd_back(&mylistb, ft_lstinew(16));
// 	ft_lstiadd_back(&mylistb, ft_lstinew(17));
// 	ft_lstiadd_back(&mylistb, ft_lstinew(18));
// 	ft_lstiadd_back(&mylistb, ft_lstinew(19));
// 	ss(&mylista, &mylistb);

// 	ft_lstiiter(mylista, print);
// 	printf("\n");
// 	ft_lstiiter(mylistb, print);
// }