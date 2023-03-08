/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:45:44 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/03/08 09:20:51 by fvon-nag         ###   ########.fr       */
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

void	checkforduplicates(t_stacks *s)
{
	int	i;
	int	j;

	i = 0;
	while (i < s->max)
	{
		j = i;
		while (j < s->max)
		{
			if (s->a[i] == s->a[j])
			{
				ft_printf("Error\nNo duplicate numbers allowed!");
				closeerror(s);
			}
			j++;
		}
		i++;
	}
}

void	closeerror(t_stacks *s)
{
	free(s->a);
	free(s->b);
	exit(0);
}
