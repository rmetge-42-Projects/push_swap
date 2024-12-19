/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:40:19 by rmetge            #+#    #+#             */
/*   Updated: 2024/12/19 18:52:22 by rmetge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	ra(t_list **a)
{
	t_list	*node;

	node = (t_list*) malloc(sizeof(t_list));
	if (!node)
		return;
	node = (*a)->next;
	(*a)->next = NULL;
	ft_lstadd_back(&node, *a);
	*a = node;
	ft_lstiter((*a), print);
}

int	main()
{
	t_list *mylista;
	t_list *mylistb;

	int	a = 11;
	int b = 10;
	int c = 12;
	int d = 13;
	int e = 14;
	int	f = 16;
	int g = 15;
	int h = 17;
	int i = 18;
	int j = 19;
	mylista = ft_lstnew(&a);
	if (!mylista)
		return 1;
	ft_lstadd_back(&mylista, ft_lstnew(&b));
	ft_lstadd_back(&mylista, ft_lstnew(&c));
	ft_lstadd_back(&mylista, ft_lstnew(&d));
	ft_lstadd_back(&mylista, ft_lstnew(&e));
	mylistb = ft_lstnew(&f);
	if (!mylistb)
		return 1;
	ft_lstadd_back(&mylistb, ft_lstnew(&g));
	ft_lstadd_back(&mylistb, ft_lstnew(&h));
	ft_lstadd_back(&mylistb, ft_lstnew(&i));
	ft_lstadd_back(&mylistb, ft_lstnew(&j));
	ra(&mylista);
}