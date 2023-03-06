/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:39:51 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/03/06 14:39:14 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stacks *s)
{
	int	c;

	if (s->as < 2)
		return ;

	c = s->a[0];
	s->a[0] = s->a[1];
	s->a[1] = c;
	ft_printf("sa\n");
}

void	sb(t_stacks *s)
{
	int	c;

	if (s->bs < 2)
		return ;

	c = s->b[0];
	s->b[0] = s->b[1];
	s->b[1] = c;
	ft_printf("sb\n");
}

void	ss(t_stacks *s)
{
	sa(s);
	sb(s);
	ft_printf("ss\n");
}

void	pa(t_stacks *s)
{
	int	i;

	if (!s->b[0])
		return ;

	i = s->as;
	while (i > 0)
	{
		s->a[i] = s->a[i - 1];
		i--;
	}
	s->a[0] = s->b[0];
	s->as++;

	i = 0;
	while (i < s->bs)
	{
		s->b[i] = s->b[i +1];
		i++;
	}
	s->bs--;
	ft_printf("pa\n");
}

void	pb(t_stacks *s)
{
	int	i;

	if (!s->a[0])
		return ;

	i = s->bs;
	while (i > 0)
	{
		s->b[i] = s->b[i - 1];
		i--;
	}
	s->b[0] = s->a[0];
	s->bs++;

	i = 0;
	while (i < s->as)
	{
		s->a[i] = s->a[i +1];
		i++;
	}
	s->as--;
	ft_printf("pb\n");
}
