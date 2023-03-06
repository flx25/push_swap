/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:15:46 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/03/06 14:40:15 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stacks *s)
{
	int	c;
	int	i;

	i = s->as -1;
	c = s->a[i];
	while (i > 0)
	{
		s->a[i] = s->a[i - 1];
		i--;
	}
	s->a[0] = c;
	ft_printf("rra\n");
}

void	rrb(t_stacks *s)
{
	int	c;
	int	i;

	i = s->bs -1;
	c = s->b[i];
	while (i > 0)
	{
		s->b[i] = s->b[i - 1];
		i--;
	}
	s->b[0] = c;
	ft_printf("rrb\n");
}

void	rrr(t_stacks *s)
{
	rra(s);
	rrb(s);
	ft_printf("rrr\n");
}
