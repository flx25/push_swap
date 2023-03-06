/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 08:33:02 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/03/06 09:09:42 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	createstacks(int argc, char **argv, t_stacks *s)
{
	int	i;

	s->a = malloc((argc -1) * sizeof(int));
	s->b = malloc((argc -1) * sizeof(int));

	i = 1;

	while (i < argc)
	{
		s->a[i -1] = ft_atoi(argv[i]);
		i++;
	}
	return (argc - 1);
}

void	printarrays(int size, t_stacks s)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_printf("a[%i] == %i\n", i, s.a[i]);
		i++;
	}
	i = 0;
		while (i < size)
	{
		ft_printf("b[%i] == %i\n", i, s.b[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_stacks	s;
	int			size;

	size = createstacks(argc, argv, &s);
	printarrays(size, s);
	return (0);
}
