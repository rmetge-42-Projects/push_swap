/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:03:48 by rmetge            #+#    #+#             */
/*   Updated: 2025/01/08 17:09:15 by rmetge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	print(int content)
// {
// 	ft_printf("%d", content);
// }

int	main(int argc, char **argv)
{
	t_listi	*dest;

	ft_error(argc, argv);
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	else
		argv++;
	dest = chang_to_list(argv);
	//ft_lstiiter(dest, print);
}
