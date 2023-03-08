/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortsmall.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:47:29 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/03/08 13:50:49 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort2(t_stacks *s)
{
	if (s->a[0] > s->a[1])
		sa(s);
}

void	sort3(t_stacks *s)
{
	if (s->a[0] > s->a[1] && s->a[2] > s->a[0])
		sa(s);
	if (s->a[0] > s->a[1] && s->a[2] < s->a[1])
	{
		sa(s);
		rra(s);
	}
	else if (s->a[0] > s->a[1] && s->a[1] < s->a[2])
		ra(s);
	else if (s->a[0] < s->a[1] && s->a[1] > s->a[2] && s->a[0] < s->a[2])
	{
		sa(s);
		ra(s);
	}
	else if (s->a[0] < s->a[1] && s->a[1] > s->a[2])
		rra(s);
}

void	sort5(t_stacks *s)
{
	while (s->as > 3)
		pb(s);
	sort3(s);
	if (s->b[0] < s->b[1])
		sb(s);
	while (s->bs > 0)
	{
		if (findind(s->b[0], s) == findind(s->a[s->as - 1], s) + 1
			|| findind(s->b[0], s) == findind(s->a[0], s) - 1)
			pa(s);
		else if (findind(s->b[1], s) == findind(s->a[s->as - 1], s) + 1
			|| findind(s->b[0], s) == findind(s->a[0], s) - 1)
			rb(s);
		else if (findind(s->b[0], s) == findind(s->a[s->as -1], s) - 1)
			rra(s);
		else
			ra(s);
	}
	while (s->a[0] > s->a[s->as -1] || s->a[0] > s->a[1] || s->a[0] > s->a[2]
		|| s->a[0] > s->a[3])
		rra(s);
}
