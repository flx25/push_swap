/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 08:12:00 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/03/08 09:06:13 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	skip(const char *nptr, int *isneg, int i)
{
	int	sign;

	sign = 0;
	while (nptr[i] != '\0' && (nptr[i] == 32 || nptr[i] == 12
			|| nptr[i] == 9 || nptr[i] == 10 || nptr[i] == 11 || nptr[i] == 13))
		i++;
	while (nptr[i] != '\0' && nptr[i] == '-' && sign == 0)
	{
		*isneg = 1;
		i++;
		sign++;
	}
	while (nptr[i] != '\0' && nptr[i] == '+' && sign == 0)
	{
		sign++;
		i++;
	}
	return (i);
}

static long	digitize(const char *nptr, int i)
{
	long	num;

	num = 0;
	while (nptr[i] != '\0' && ft_isdigit(nptr[i]))
	{
		num *= 10;
		num += nptr[i] - '0';
		i++;
	}
	if (!ft_isdigit(nptr[i]) && nptr[i] != '\0')
		return (-1);
	return (num);
}

long	ft_atoi(const char *nptr, int *error)
{
	int		i;
	long	num;
	int		isneg;

	isneg = 0;
	num = 0;
	i = 0;
	num = digitize(nptr, skip(nptr, &isneg, i));
	if (num == -1 || (num > 2147483647 && isneg == 0) || num > 2147483648)
		*error = 1;
	if (isneg == 0)
		return (num);
	else
		return (num * -1);
}
