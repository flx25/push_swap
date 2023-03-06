/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 08:33:02 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/03/06 11:16:03 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	createstacks(int argc, char **argv, t_stacks *s)
{
	int	i;

	s->a = malloc((argc -1) * sizeof(int));
	s->b = malloc((argc -1) * sizeof(int));
	if (!s->a || !s->b)
		return (-1);
	i = 1;

	while (i < argc)
	{
		s->a[i -1] = ft_atoi(argv[i]);
		i++;
	}
	s->as = argc - 1;
	s->bs = 0;
	return (argc - 1);
}

void	printarrays(int msize, t_stacks s)
{
	int	i;

	i = 0;
	while (i < msize)
	{
		ft_printf("a[%i] == %i\n", i, s.a[i]);
		i++;
	}
	i = 0;
	while (i < msize)
	{
		ft_printf("b[%i] == %i\n", i, s.b[i]);
		i++;
	}
}

//void	sortbysize(t_stacks *s, int size)
//{

//}

int	main(int argc, char **argv)
{
	t_stacks	s;
	int			msize;

	msize = createstacks(argc, argv, &s);
	//sortbysize(&s, size);
	printarrays(msize, s);
	return (0);
}
