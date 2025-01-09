/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:03:48 by rmetge            #+#    #+#             */
/*   Updated: 2025/01/09 16:30:16 by rmetge           ###   ########.fr       */
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
	t_listi	*l1;
	t_listi	*l2;

	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	else
		argv++;
	if (ft_error(argc, argv) == 0)
		return (ft_putstr_fd("Error\n", 2), 1);
	l1 = chang_to_list(argv);
	l2 = NULL;
	if (ft_lensplit(argv) == 2)
		ft_trie_2(&l1);
	else if (ft_lensplit(argv) == 3)
		ft_trie_3(&l1);
	else if (ft_lensplit(argv) == 5)
		ft_trie_5(&l1);
	ft_lstiiter(l1, print);
	// ft_lstiiter(l2, print);
	if (argc == 2)
			ft_free(argv);
	ft_lsticlear(&l1);
	ft_lsticlear(&l2);
}
