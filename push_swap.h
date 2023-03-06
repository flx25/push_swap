/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 08:38:24 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/03/06 13:21:42 by fvon-nag         ###   ########.fr       */
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
}				t_stacks;

void	sa(t_stacks *s, int size);
void	sb(t_stacks *s, int size);
void	ss(t_stacks *s, int size);
void	pa(t_stacks *s);
void	pb(t_stacks *s);
void	ra(t_stacks *s);
void	rb(t_stacks *s);
void	rr(t_stacks *s);
void	rra(t_stacks *s);
void	rrb(t_stacks *s);
void	rrr(t_stacks *s);

#endif
