/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 10:42:54 by rmetge            #+#    #+#             */
/*   Updated: 2025/01/09 16:29:12 by rmetge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include "libft.h"

typedef struct i_list
{
	int				content;
	struct i_list	*next;
}	t_listi;

void	ra(t_listi **a);
void	rb(t_listi **b);
void	rr(t_listi **a, t_listi **b);
void	sa(t_listi **a);
void	sb(t_listi **b);
void	ss(t_listi **a, t_listi **b);
void	rra(t_listi **a);
void	rrb(t_listi **b);
void	rrr(t_listi **a, t_listi **b);
void	pa(t_listi **a, t_listi **b);
void	pb(t_listi **a, t_listi **b);
int		ft_lstisize(t_listi *lst);
t_listi	*ft_lstinew(int content);
void	ft_lsticlear(t_listi **lst);
void	ft_lstiadd_back(t_listi **lst, t_listi *new);
void	ft_lstiadd_front(t_listi **lst, t_listi *new);
void	ft_lstiiter(t_listi *lst, void (*f)(int));
t_listi	*ft_lstilast(t_listi *lst);
void	ft_strcpy(char	*dest, const char	*src);
long	ft_atol(const char *str);
int	ft_error(int argc, char **argv);
t_listi	*chang_to_list(char **str);
void	ft_free(char **split);
t_listi	**ft_trie_3(t_listi **l1);
t_listi	**ft_trie_2(t_listi **l1);
t_listi	**ft_trie_5(t_listi **l1);

#endif