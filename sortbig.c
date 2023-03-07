/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortbig.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:16:18 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/03/07 10:45:20 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ctoindex(t_stacks *s)
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

void	sortbig(t_stacks *s)
{
	ctoindex(s);
}
