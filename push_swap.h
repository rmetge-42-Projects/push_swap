/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 10:42:54 by rmetge            #+#    #+#             */
/*   Updated: 2025/01/08 16:32:26 by rmetge           ###   ########.fr       */
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

int		ft_lstisize(t_listi *lst);
t_listi	*ft_lstinew(int content);
void	ft_lsticlear(t_listi **lst);
void	ft_lstiadd_back(t_listi **lst, t_listi *new);
void	ft_lstiadd_front(t_listi **lst, t_listi *new);
void	ft_lstiiter(t_listi *lst, void (*f)(int));
t_listi	*ft_lstilast(t_listi *lst);
int		ft_strcmp(const char	*fir, const char	*sec);
void	ft_strcpy(char	*dest, const char	*src);
long	ft_atol(const char *str);
void	ft_error(int argc, char **argv);
t_listi	*chang_to_list(char **str);

#endif