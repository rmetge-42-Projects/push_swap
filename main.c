/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:03:48 by rmetge            #+#    #+#             */
/*   Updated: 2025/01/11 12:48:15 by rmetge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print(int content)
{
	ft_printf("%d ", content);
}

int	ft_lensplit(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	t_listi	*a;
	t_listi	*b;

	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	else
		argv++;
	if (ft_error(argc, argv) == 0)
		return (ft_putstr_fd("Error\n", 2), 1);
	a = chang_to_list(argv);
	b = NULL;
	if (ft_lensplit(argv) == 2)
		ft_trie_2(&a);
	else if (ft_lensplit(argv) == 3)
		ft_trie_3(&a);
	else if (ft_lensplit(argv) == 5)
		ft_trie_5(&a, &b);
	ft_position(&a);
	ft_index(&a);
	ft_trie_100(&a, &b);
	// while (a)
	// {
	// 	ft_printf("%i  %i  %i\n", (a)->position, (a)->index, (a)->content);
	// 	(a) = (a)->next;
	// }
	ft_lstiiter(a, print);
	ft_printf("\n");
	ft_lstiiter(b, print);
	if (argc == 2)
		ft_free(argv);
	ft_lsticlear(&a);
	ft_lsticlear(&b);
}
