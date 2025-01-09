/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:40:19 by rmetge            #+#    #+#             */
/*   Updated: 2025/01/08 15:24:46 by rmetge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_listi **a)
{
	t_listi	*node;

	node = (*a)->next;
	(*a)->next = NULL;
	ft_lstiadd_back(&node, *a);
	*a = node;
}

void	rb(t_listi **b)
{
	t_listi	*node;

	node = (*b)->next;
	(*b)->next = NULL;
	ft_lstiadd_back(&node, *b);
	*b = node;
}

void	rr(t_listi **a, t_listi **b)
{
	ra(a);
	rb(b);
}

// void	print(int content)
// {
// 	ft_printf("%i ", (content));
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
// 	rr(&mylista, &mylistb);
// 	ft_lstiiter((mylista), print);
// 	ft_printf("\n");
// 	ft_lstiiter((mylistb), print);
// }