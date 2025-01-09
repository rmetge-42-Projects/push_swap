/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_liste_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:21:39 by rmetge            #+#    #+#             */
/*   Updated: 2025/01/09 09:38:35 by rmetge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstiiter(t_listi *lst, void (*f)(int))
{
	while (lst && f)
	{
		f(lst->content);
		lst = lst->next;
	}
}

t_listi	*ft_lstilast(t_listi *lst)
{
	while (lst && lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

// int	ft_strcmp(const char	*fir, const char	*sec)
// {
// 	size_t	i;

// 	i = 0;
// 	while (fir[i] && sec[i])
// 	{
// 		if ((unsigned char)fir[i] != (unsigned char)sec[i])
// 			return ((unsigned char)fir[i] - (unsigned char)sec[i]);
// 		i++;
// 	}
// 	return ((unsigned char)fir[i] - (unsigned char)sec[i]);
// }

void	ft_strcpy(char	*dest, const char	*src)
{
	size_t	i;

	i = 0;
	if (src[i])
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
}

long	ft_atol(const char *str)
{
	int		i;
	int		s;
	long	res;

	i = 0;
	s = 1;
	res = 0;
	while (((str[i] >= 9 && str[i] <= 13)) || (str[i] == 32))
		i++;
	if ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * s);
}
