/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:26:20 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/03/08 14:29:05 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	createstacks(int argc, char **argv, t_stacks *s)
{
	int	i;
	int	error;

	error = 0;
	s->a = malloc((argc -1) * sizeof(int));
	s->b = malloc((argc -1) * sizeof(int));
	if (!s->a || !s->b)
		return (-1);
	i = 1;
	while (i < argc)
	{
		s->a[i -1] = ft_atoi(argv[i], &error);
		if (error == 1)
		{
			ft_printf("Error\n");
			closeerror(s);
		}
		i++;
	}
	s->as = argc - 1;
	s->bs = 0;
	s->max = argc - 1;
	return (argc - 1);
}
