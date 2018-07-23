/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaguire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 12:34:26 by jmaguire          #+#    #+#             */
/*   Updated: 2018/07/18 12:02:57 by jmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*tab;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	i = min;
	tab = (int*)malloc(sizeof(*tab) * max + 1);
	if (tab == NULL)
	{
		return (0);
	}
	while (i <= max)
	{
		tab[i - min] = i;
		i++;
	}
	*range = tab;
	return (max - min);
}

int		main(void)
{
	int min;
	int max;
	int *range;

	min = 10;
	max = 18;
	ft_ultimate_range(&range, min, max);
	for (int i = 0; i < max - min; i++)
	{
		printf("%d, %d\n", i, range[i]);
	}
	printf("Result: %d\n", ft_ultimate_range(&range, min, max));
	return (0);
}
