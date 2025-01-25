/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:40:19 by rmetge            #+#    #+#             */
/*   Updated: 2025/01/25 15:19:24 by rmetge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rlst(t_listi **lst)
{
	t_listi	*node;

	node = (*lst)->next;
	(*lst)->next = NULL;
	ft_lstiadd_back(&node, *lst);
	*lst = node;
}

void	rlstab(t_listi **a, t_listi **b)
{
	rlst(a);
	rlst(b);
}

// void	rb(t_listi **b)
// {
// 	t_listi	*node;

// 	node = (*b)->next;
// 	(*b)->next = NULL;
// 	ft_lstiadd_back(&node, *b);
// 	*b = node;
// 	ft_printf("rb\n");
// }

void	ra(t_listi **a)
{
	rlst(a);
	ft_printf("ra\n");
}

void	rb(t_listi **b)
{
	rlst(b);
	ft_printf("rb\n");
}

void	rr(t_listi **a, t_listi **b)
{
	rlst(a);
	rlst(b);
	ft_printf("rr\n");
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