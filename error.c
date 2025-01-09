/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 10:49:14 by rmetge            #+#    #+#             */
/*   Updated: 2025/01/09 09:54:34 by rmetge           ###   ########.fr       */
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

int	ft_lennbr(char *str)
{
	int	i;
	int	nbr;
	int	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		nbr = 0;
		if (str[i] != 32 && (str[i] < 48 || str[i] > 57))
		{
			if (str[i] != 43 && str[i] != 45)
				return (-1);
		}
		while (str[i] == ' ')
			i++;
		if (str[i] == '-' || str[i] == '+')
			i++;
		if (str[i] == '-' || str[i] == '+' || str[i] == ' ' || str[i] == '\0')
			return (-1);
		while (str[i] >= '0' && str[i] <= '9')
		{
			i++;
			nbr = 1;
		}
		// if (str[i] == '-' || str[i] == '+')
		// 	return (-1);
		if (nbr == 1)
			len++;
	}
	return (len);
}


int	ft_doublon(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i + 1] && str[i])
	{
		j = i + 1;
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

int	ft_lim(char **str)
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

void	ft_error(int argc, char **argv)
{
	int	nbr;
	int	i;
	int	r;

	r = 1;
	if (argc < 2)
		r = 0;
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	else
		argv++;
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
	if (r == 0)
	{
		ft_putstr_fd ("Error\n", 2);
		return ;
	}
}
