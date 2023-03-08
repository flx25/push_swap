/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 08:33:02 by fvon-nag          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/03/08 09:21:43 by fvon-nag         ###   ########.fr       */
=======
/*   Updated: 2023/03/07 17:33:57 by fvon-nag         ###   ########.fr       */
>>>>>>> e698800d29336bcfb8ac5f6e457fad28a74a4ccd
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// add error checks (non integers,etc)
//remove printarray
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
			ft_printf("Error\nOnly give valid integers as input!");
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

	createstacks(argc, argv, &s);
	checkforduplicates(&s);
	sortbysize(&s);
<<<<<<< HEAD
	printarrays(s);
=======
	free(s.a);
	free(s.b);
>>>>>>> e698800d29336bcfb8ac5f6e457fad28a74a4ccd
	return (0);
}
