/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liste_chaine.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:07:58 by rmetge            #+#    #+#             */
/*   Updated: 2025/01/08 16:41:42 by rmetge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_listi	*chang_to_list(char **str)
{
	t_listi	*dest;
	int		i;

	dest = NULL;
	i = 0;
	while (str[i])
	{
		//printf("%d\n", ft_atoi(str[i]));
		ft_lstiadd_back(&dest, ft_lstinew(ft_atoi(str[i])));
		i++;
	}
	return (dest);
}
