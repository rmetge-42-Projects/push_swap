/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:03:48 by rmetge            #+#    #+#             */
/*   Updated: 2025/01/24 09:29:42 by rmetge           ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	t_listi	*a;
	t_listi	*b;

	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	else
		argv++;
	a = chang_to_list(argv);
	b = NULL;
	if (ft_error(argc, argv) == 0)
		return (ft_free_all(argc, argv, a, b), ft_putstr_fd("Error\n", 2), 1);
	if (ft_lst_trie(a) == 0)
		return (ft_free_all(argc, argv, a, b), 1);
	if (ft_lensplit(argv) == 2)
		ft_trie_2(&a);
	else if (ft_lensplit(argv) == 3)
		ft_trie_3(&a);
	else if (ft_lensplit(argv) == 5)
		ft_trie_5(&a, &b);
	else
		ft_trie_100(&a, &b);
	ft_free_all(argc, argv, a, b);
}
