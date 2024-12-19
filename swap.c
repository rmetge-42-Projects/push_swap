/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 09:16:51 by rmetge            #+#    #+#             */
/*   Updated: 2024/12/19 18:31:23 by rmetge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	print(void *content)
{
	printf("%d " , *(int *)(content));
}

void	sa(t_list **a)
{
	t_list	*node;

	if (ft_lstsize(*a) < 2)
		return;
	node = (t_list*) malloc(sizeof(t_list));
	if (!node)
		return;
	node = (*a)->next;
	(*a)->next = (*a)->next->next;
	ft_lstadd_front(a, node);
	ft_lstiter((*a), print);
}

void	sb(t_list **b)
{
	t_list	*node;

	if (ft_lstsize(*b) < 2)
		return;
	node = (t_list*) malloc(sizeof(t_list));
	if (!node)
		return;
	node = (*b)->next;
	(*b)->next = (*b)->next->next;
	ft_lstadd_front(b, node);
	ft_lstiter((*b), print);
}

void	ss(t_list **a, t_list **b)
{
	sa(a);
	sb(b);
}


// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>


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
// 	ss(&mylista, &mylistb);

// 	ft_lstiter(mylista, print);
// 	ft_lstiter(mylistb, print);
//}