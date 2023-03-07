/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 08:33:02 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/03/07 10:17:04 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// add error checks (non integers,etc)
// 5 1 3 2 4
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

void	printarrays(t_stacks s)
{
	int	i;

	i = 0;
	while (i < s.as)
	{
		ft_printf("a[%i] == %i\n", i, s.a[i]);
		i++;
	}
	i = 0;
	ft_printf("\n");
	while (i < s.bs)
	{
		ft_printf("b[%i] == %i\n", i, s.b[i]);
		i++;
	}
}

void	sortbysize(t_stacks *s)
{
	if (s->as == 2)
		sort2(s);
	else if (s->as == 3)
		sort3(s);
	else if (s->as > 3 && s->as <= 5)
		sort5(s);
	else if (s->as > 5)
		sortbig(s);
}

int	main(int argc, char **argv)
{
	t_stacks	s;

	createstacks(argc, argv, &s);
	sortbysize(&s);

	printarrays(s);
	return (0);
}
