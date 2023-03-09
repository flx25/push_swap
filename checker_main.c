/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:04:37 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/03/09 08:05:46 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	recieveorder2(t_stacks *s, char *line)
{
	if (ft_strnstr(line, "rrr\n", 4))
		rrr(s);
	else if (ft_strnstr(line, "\n", 1))
	{
		if (checkifsort(s) == 1)
			ft_printf("OK\n");
		else
			ft_printf("KO\n");
		closeerror(s);
	}
	else
	{
		ft_printf("Error\n");
		free(line);
		closeerror(s);
	}
}

void	recieveorder(t_stacks *s, char *line)
{
	if (ft_strnstr(line, "sa\n", 3))
		sa(s);
	else if (ft_strnstr(line, "sb\n", 3))
		sb(s);
	else if (ft_strnstr(line, "ss\n", 3))
		ss(s);
	else if (ft_strnstr(line, "pa\n", 3))
		pa(s);
	else if (ft_strnstr(line, "pb\n", 3))
		pb(s);
	else if (ft_strnstr(line, "ra\n", 3))
		ra(s);
	else if (ft_strnstr(line, "rb\n", 3))
		rb(s);
	else if (ft_strnstr(line, "rr\n", 3))
		rr(s);
	else if (ft_strnstr(line, "rb\n", 3))
		rb(s);
	else if (ft_strnstr(line, "rra\n", 4))
		rra(s);
	else if (ft_strnstr(line, "rrb\n", 4))
		rrb(s);
	else
		recieveorder2(s, line);
}

void	sortbyorders(t_stacks *s)
{
	char	*line;

	line = ft_calloc(1, sizeof(char));
	while (line != NULL)
	{
		free(line);
		line = get_next_line(0);
		recieveorder(s, line);
		if (checkifsort(s) == 1)
		{
			ft_printf("OK\n");
			closeerror(s);
		}
	}
}

int	checkifsort(t_stacks *s)
{
	int	i;

	if (s->as == s->max && s->as == 1)
		return (1);
	i = 1;
	while (i < s->max)
	{
		if (s->a[i] <= s->a[i -1])
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_stacks	s;
	char		**sstrings;
	int			strcheck;

	strcheck = 1;
	if (argc == 1)
		return (0);
	checkforemptyarg(argc, argv);
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
	if (checkifsort(&s) == 0)
		sortbyorders(&s);
	else
		ft_printf("OK\n");
	closeerror(&s);
	return (0);
}
