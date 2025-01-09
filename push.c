/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:35:38 by rmetge            #+#    #+#             */
/*   Updated: 2025/01/08 15:24:40 by rmetge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_listi **a, t_listi **b)
{
	t_listi	*temp;

	if (ft_lstisize(*b) == 0)
		return ;
	temp = (*b)->next;
	ft_lstiadd_front(a, *b);
	*b = temp;
}

void	pb(t_listi **a, t_listi **b)
{
	t_listi	*temp;

	if (ft_lstisize(*a) == 0)
		return ;
	temp = (*a)->next;
	ft_lstiadd_front(b, *a);
	*a = temp;
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
// 	pa(&mylista, &mylistb);
// 	ft_lstiiter((mylista), print);
// 	ft_printf("\n");
// 	ft_lstiiter((mylistb), print);
// }