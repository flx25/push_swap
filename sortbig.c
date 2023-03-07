/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortbig.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:16:18 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/03/07 12:43:24 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	toindex(t_stacks *s)
{
	int			*conval;
	int			i;

	conval = malloc(s->as * sizeof(int));
	i = 0;
	while (i < s->as)
	{
		conval[i] = findind(s->a[i], s);
		i++;
	}
	i = 0;
	while (i < s->as)
	{
		s->a[i] = conval[i];
		i++;
	}
	free(conval);
}

void	sortrdx0(t_stacks *s)
{
	int	max_num;
	int	max_bits;
	int	i;
	int	j;

	max_bits = 0;
	max_num = s->max - 1;
	while ((max_num >> max_bits) != 0)
		++max_bits;
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < s->max - 1)
		{
			if (((s->a[0] >> i) & 1) == 1)
				ra(s);
			else
				pb(s);
			j++;
		}
		while (s->bs > 0)
			pa(s);
		i++;
	}
}

void	sortbig(t_stacks *s)
{
	toindex(s);
	sortrdx0(s);
}
