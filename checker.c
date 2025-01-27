/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 08:55:20 by rmetge            #+#    #+#             */
/*   Updated: 2025/01/27 09:32:51 by rmetge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "get_next_line.h"

int	ft_test_arg(char *str)
{
	if (ft_strncmp(str, "ra\n", ft_strlen(str)) == 0
		|| ft_strncmp(str, "rb\n", ft_strlen(str)) == 0
		|| ft_strncmp(str, "rr\n", ft_strlen(str)) == 0
		|| ft_strncmp(str, "rra\n", ft_strlen(str)) == 0
		|| ft_strncmp(str, "rrb\n", ft_strlen(str)) == 0
		|| ft_strncmp(str, "rrr\n", ft_strlen(str)) == 0
		|| ft_strncmp(str, "sa\n", ft_strlen(str)) == 0
		|| ft_strncmp(str, "sb\n", ft_strlen(str)) == 0
		|| ft_strncmp(str, "ss\n", ft_strlen(str)) == 0
		|| ft_strncmp(str, "pa\n", ft_strlen(str)) == 0
		|| ft_strncmp(str, "pb\n", ft_strlen(str)) == 0)
		return (1);
	else
		return (0);
}

void	ft_application(t_listi **a, t_listi **b, char *str)
{
	if (ft_strncmp(str, "ra\n", ft_strlen(str)) == 0)
		rlst(a);
	else if (ft_strncmp(str, "rb\n", ft_strlen(str)) == 0)
		rlst(b);
	else if (ft_strncmp(str, "rr\n", ft_strlen(str)) == 0)
		rlstab(a, b);
	else if (ft_strncmp(str, "rra\n", ft_strlen(str)) == 0)
		rrlst(a);
	else if (ft_strncmp(str, "rrb\n", ft_strlen(str)) == 0)
		rrlst(b);
	else if (ft_strncmp(str, "rrr\n", ft_strlen(str)) == 0)
		rrlstab(a, b);
	else if (ft_strncmp(str, "sa\n", ft_strlen(str)) == 0)
		slst(a);
	else if (ft_strncmp(str, "sb\n", ft_strlen(str)) == 0)
		slst(b);
	else if (ft_strncmp(str, "ss\n", ft_strlen(str)) == 0)
		slstab(a, b);
	else if (ft_strncmp(str, "pa\n", ft_strlen(str)) == 0)
		palst(a, b);
	else if (ft_strncmp(str, "pb\n", ft_strlen(str)) == 0)
		pblst(a, b);
}

void	ft_valid_a_b(t_listi **a, t_listi **b, char *str)
{
	if ((ft_strncmp(str, "ra\n", ft_strlen(str)) == 0
			|| ft_strncmp(str, "rra\n", ft_strlen(str)) == 0
			|| ft_strncmp(str, "sa\n", ft_strlen(str)) == 0
			|| ft_strncmp(str, "pa\n", ft_strlen(str)) == 0) && (*a) == NULL)
		return ;
	else if ((ft_strncmp(str, "rb\n", ft_strlen(str)) == 0
			|| ft_strncmp(str, "rrb\n", ft_strlen(str)) == 0
			|| ft_strncmp(str, "sb\n", ft_strlen(str)) == 0
			|| ft_strncmp(str, "pb\n", ft_strlen(str)) == 0) && (*b) == NULL)
		return ;
	ft_application(a, b, str);
	return ;
}

int	ft_gnl(t_listi **a, t_listi **b)
{
	char	*dest;
	int		x;
	int		i;

	x = 0;
	i = 0;
	dest = get_next_line(0);
	while (dest != NULL)
	{
		if (ft_test_arg(dest) == 0)
			x = 1;
		ft_valid_a_b(a, b, dest);
		i++;
		free(dest);
		dest = get_next_line(0);
	}
	return (x);
}

int	main(int argc, char **argv)
{
	t_listi	*a;
	t_listi	*b;
	int		x;

	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	else
		argv++;
	a = chang_to_list(argv);
	b = NULL;
	if (ft_error(argc, argv) == 0)
		return (ft_free_all(argc, argv, a, b), ft_putstr_fd("Error\n", 2), 1);
	x = ft_gnl(&a, &b);
	if (x == 1)
		return (ft_free_all(argc, argv, a, b), ft_putstr_fd("Error\n", 2), 1);
	if (ft_lst_trie(a) == 0)
		return (ft_free_all(argc, argv, a, b), ft_putstr_fd("OK\n", 1), 1);
	else if (ft_lst_trie(a) == 1)
		return (ft_free_all(argc, argv, a, b), ft_putstr_fd("KO\n", 1), 0);
}
