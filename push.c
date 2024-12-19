/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:35:38 by rmetge            #+#    #+#             */
/*   Updated: 2024/12/19 18:37:12 by rmetge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	pa(t_list **a, t_list **b)
{
	t_list	*temp;

	if (ft_lstsize(*b) == 0)
		return;
	temp =(*b)->next;
	ft_lstadd_front(a, *b);
	*b = temp;
	ft_lstiter((*a), print);
}

void	pb(t_list **a, t_list **b)
{
	t_list	*temp;

	if (ft_lstsize(*b) == 0)
		return;
	temp =(*b)->next;
	ft_lstadd_front(b, *a);
	*a = temp;
	ft_lstiter((*b), print);
}


// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// void	print(void *content)
// {
// 	printf("%d " , *(int *)(content));

// }

// int	main()
// {
// 	t_list *mylista;
// 	t_list *mylistb;

// 	int	a = 11;
// 	int b = 10;
// 	int c = 12;
// 	int d = 13;
// 	int e = 14;
// 	int	f = 16;
// 	int g = 15;
// 	int h = 17;
// 	int i = 18;
// 	int j = 19;
// 	mylista = ft_lstnew(&a);
// 	if (!mylista)
// 		return 1;
// 	ft_lstadd_back(&mylista, ft_lstnew(&b));
// 	ft_lstadd_back(&mylista, ft_lstnew(&c));
// 	ft_lstadd_back(&mylista, ft_lstnew(&d));
// 	ft_lstadd_back(&mylista, ft_lstnew(&e));
// 	mylistb = ft_lstnew(&f);
// 	if (!mylistb)
// 		return 1;
// 	ft_lstadd_back(&mylistb, ft_lstnew(&g));
// 	ft_lstadd_back(&mylistb, ft_lstnew(&h));
// 	ft_lstadd_back(&mylistb, ft_lstnew(&i));
// 	ft_lstadd_back(&mylistb, ft_lstnew(&j));
// 	pb(&mylista, &mylistb);
// }