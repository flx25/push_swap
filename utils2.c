/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:51:02 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/03/09 08:04:11 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	checkforemptyarg(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc + 1)
	{
		if (ft_strlen(argv[i]) == 0)
		{
			ft_printf("Error\n");
			exit(0);
		}
		i++;
	}
}

void	closeerror2(t_stacks *s, char **argv)
{
	free(s->a);
	free(s->b);
	freeout(argv);
	exit(0);
}

void	freeout(char **out)
{
	int	i;

	i = 0;
	while (out[i] != 0)
	{
		free(out[i]);
		i++;
	}
	free(out[i]);
	free(out);
}
