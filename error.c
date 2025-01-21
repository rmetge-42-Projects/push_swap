/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 10:49:14 by rmetge            #+#    #+#             */
/*   Updated: 2025/01/21 16:55:32 by rmetge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_lennbr(char *str)
{
	int		i;
	int		len;
	char	c;

	i = 0;
	len = 0;
	while (str[i])
	{
		c = str[i];
		if (c != 32 && (c < 48 || c > 57) && c != 43 && c != 45)
			return (-1);
		while (str[i] == ' ')
			i++;
		if (str[i] == '-' || str[i] == '+')
			i++;
		if (str[i] == '-' || str[i] == '+' || str[i] == ' ' || str[i] == '\0')
			return (-1);
		while (str[i] >= '0' && str[i] <= '9')
			i++;
		if (str[i - 1] >= '0' && str[i - 1] <= '9')
			len++;
	}
	return (len);
}

static int	ft_doublon(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i + 1] && str[i])
	{
		j = i + 1;
		if (str[i][0] == '\0')
			return (0);
		while (str[j])
		{
			if (ft_atoi(str[i]) == ft_atoi(str[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int	ft_lim(char **str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (ft_atol(str[i]) < -2147483647 || ft_atol(str[i]) > 2147483647)
			return (0);
		i++;
	}
	return (1);
}

int	ft_error(int argc, char **argv)
{
	int	nbr;
	int	i;
	int	r;

	r = 1;
	if (argc < 2)
		r = 0;
	i = 0;
	while (argv[i])
	{
		nbr = ft_lennbr(argv[i]);
		if (nbr == -1 || (argc > 2 && nbr > 1))
			r = 0;
		i++;
	}
	if (ft_doublon(argv) == 0)
		r = 0;
	if (ft_lim(argv) == 0)
		r = 0;
	return (r);
}
