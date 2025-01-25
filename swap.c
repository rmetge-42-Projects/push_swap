/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 09:16:51 by rmetge            #+#    #+#             */
/*   Updated: 2025/01/25 15:21:07 by rmetge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	slst(t_listi **lst)
{
	t_listi	*node;

	if (ft_lstisize(*lst) < 2)
		return ;
	node = (*lst)->next;
	(*lst)->next = (*lst)->next->next;
	ft_lstiadd_front(lst, node);
}

void	slstab(t_listi **a, t_listi **b)
{
	slst(a);
	slst(b);
}

void	sa(t_listi **a)
{
	slst(a);
	ft_printf("sa\n");
}

void	sb(t_listi **b)
{
	slst(b);
	ft_printf("sb\n");
}

void	ss(t_listi **a, t_listi **b)
{
	slst(a);
	slst(b);
	ft_printf("ss\n");
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