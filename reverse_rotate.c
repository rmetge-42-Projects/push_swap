/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 13:24:45 by rmetge            #+#    #+#             */
/*   Updated: 2025/01/15 11:46:54 by rmetge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrlst(t_listi **lst)
{
	t_listi	*node;
	t_listi	*node2;
	t_listi	*node3;
	int		i;
	int		n;

	i = 0;
	(node3) = *lst;
	node = ft_lstilast(*lst);
	n = ft_lstisize(*lst);
	while ((n -1) > i)
	{
		node2 = (node3)->next;
		(node3)->next = NULL;
		ft_lstiadd_back(&node, node3);
		(node3) = node2;
		i++;
	}
	(*lst) = node;
}

void	rra(t_listi **a)
{
	rrlst(a);
	ft_printf("rra\n");
}

void	rrb(t_listi **b)
{
	rrlst(b);
	ft_printf("rrb\n");
}

// void	rrb(t_listi **b)
// {
// 	t_listi	*node;
// 	t_listi	*node2;
// 	t_listi	*node3;
// 	int		i;
// 	int		n;

// 	i = 0;
// 	(node3) = *b;
// 	node = ft_lstilast(*b);
// 	n = ft_lstisize(*b);
// 	while ((n -1) > i)
// 	{
// 		node2 = (node3)->next;
// 		(node3)->next = NULL;
// 		ft_lstiadd_back(&node, node3);
// 		(node3) = node2;
// 		i++;
// 	}
// 	(*b) = node;
// 	ft_printf("rrb\n");
// }

void	rrr(t_listi **a, t_listi **b)
{
	rrlst(a);
	rrlst(b);
	ft_printf("rrr\n");
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
// 	rrr(&mylista, &mylistb);
// 	// rrb(&mylistb);
// 	ft_lstiiter((mylista), print);
// 	ft_printf("\n");
// 	ft_lstiiter((mylistb), print);
// }