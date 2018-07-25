/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaguire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 12:04:46 by jmaguire          #+#    #+#             */
/*   Updated: 2018/07/25 13:38:56 by jmaguire         ###   ########.fr       */
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
