/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:45:44 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/03/09 08:35:10 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	createstackss(int argc, char **argv, t_stacks *s)
{
	int	i;
	int	error;

	error = 0;
	s->a = malloc((argc) * sizeof(int));
	s->b = malloc((argc) * sizeof(int));
	if (!s->a || !s->b)
		return (-1);
	i = 0;
	while (i < argc)
	{
		s->a[i] = ft_atoi(argv[i], &error);
		if (error == 1)
		{
			ft_printf("Error\n");
			closeerror2(s, argv);
		}
		i++;
	}
	s->as = argc;
	s->bs = 0;
	s->max = argc;
	freeout(argv);
	return (argc);
}

int	checkforstring(char *arg1)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (arg1[i] != '\0')
	{
		if (arg1[i] != ' ' && arg1[i] != '\0')
			count++;
		while (arg1[i] != ' ' && arg1[i] != '\0')
			i++;
		if (!ft_isdigit(arg1[i]) && arg1[ft_strlen(arg1)] == '\0'
			&& arg1[i] != '\0')
			i++;
	}
	if (count == 0)
		return (1);
	return (count);
}

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
		j = i +1;
		while (j < s->max)
		{
			if (s->a[i] == s->a[j])
			{
				ft_printf("Error\n");
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
