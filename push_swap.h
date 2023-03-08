/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 08:38:24 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/03/08 09:19:50 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "libft/libft.h"
# include <fcntl.h>

typedef struct s_stacks
{
	int	*a;
	int	*b;
	int	as;
	int	bs;
	int	max;
}				t_stacks;

void	sa(t_stacks *s);
void	sb(t_stacks *s);
void	ss(t_stacks *s);
void	pa(t_stacks *s);
void	pb(t_stacks *s);
void	ra(t_stacks *s);
void	rb(t_stacks *s);
void	rr(t_stacks *s);
void	rra(t_stacks *s);
void	rrb(t_stacks *s);
void	rrr(t_stacks *s);
void	sort2(t_stacks *s);
void	sort3(t_stacks *s);
void	sort5(t_stacks *s);
int		findind(int num, t_stacks *s);
void	sortbig(t_stacks *s);
void	toindex(t_stacks *s);
void	sortrdx0(t_stacks *s);
void	closeerror(t_stacks *s);
void	checkforduplicates(t_stacks *s);

#endif
