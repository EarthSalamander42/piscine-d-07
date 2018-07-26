/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaguire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 12:34:26 by jmaguire          #+#    #+#             */
/*   Updated: 2018/07/26 21:31:53 by jmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*tab;

	if (min >= max)
	{
		*range = (void*)0;
		return (0);
	}
	i = min;
	tab = (int*)malloc(sizeof(*tab) * max + 1);
	if (tab == NULL)
		return (0);
	while (i <= max)
	{
		tab[i - min] = i;
		i++;
	}
	*range = tab;
	return (max - min);
}
