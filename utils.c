/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:45:44 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/03/07 09:02:38 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	findind(int num, t_stacks *s)
{
	int	index;
	int	i;

	i = 0;
	index = 0;
	while (i < s->as)
	{
		if (s->a[i] < num)
			index++;
		i++;
	}
	i = 0;
	while (i < s->bs)
	{
		if (s->b[i] < num)
			index++;
		i++;
	}
	return (index);
}
