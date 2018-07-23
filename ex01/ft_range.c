/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaguire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 12:04:46 by jmaguire          #+#    #+#             */
/*   Updated: 2018/07/17 12:04:48 by jmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		size;
	int		*tab;

	if (min >= max)
		return (NULL);
	size = max - min;
	tab = NULL;
	tab = (int*)malloc(sizeof(*tab) * size);
	if (tab == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

int		main(void)
{
	int min;
	int max;
	int *tab;

	min = 15;
	max = 27;
	tab = ft_range(min, max);
	for (int i = 0; i < max - min; ++i)
		printf("Result: %d\n", tab[i]);
	free(tab);
	return (0);
}
