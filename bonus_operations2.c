/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_operations2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:02:56 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/03/08 15:03:14 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stacks *s)
{
	int	c;
	int	i;

	c = s->a[0];
	i = 0;
	while (i < s->as)
	{
		s->a[i] = s->a[i + 1];
		i++;
	}
	s->a[s->as -1] = c;
}

void	rb(t_stacks *s)
{
	int	c;
	int	i;

	c = s->b[0];
	i = 0;
	while (i < s->bs)
	{
		s->b[i] = s->b[i + 1];
		i++;
	}
	s->b[s->bs -1] = c;
}

void	rr(t_stacks *s)
{
	ra(s);
	rb(s);
}
