/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:26:07 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/03/06 14:39:46 by fvon-nag         ###   ########.fr       */
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
	ft_printf("ra\n");
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
	ft_printf("rb\n");
}

void	rr(t_stacks *s)
{
	ra(s);
	rb(s);
	ft_printf("rr\n");
}
