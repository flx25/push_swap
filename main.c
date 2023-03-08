/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 08:33:02 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/03/08 13:51:53 by fvon-nag         ###   ########.fr       */
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
	char		**sstrings;
	int			strcheck;

	strcheck = 1;
	if (argc == 2)
		strcheck = checkforstring(argv[1]);
	if (strcheck == 1)
		createstacks(argc, argv, &s);
	else
	{
		sstrings = ft_split(argv[1], ' ');
		createstackss(strcheck, sstrings, &s);
	}
	checkforduplicates(&s);
	sortbysize(&s);
	closeerror(&s);
	return (0);
}
