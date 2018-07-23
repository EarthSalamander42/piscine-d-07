/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaguire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 10:30:28 by jmaguire          #+#    #+#             */
/*   Updated: 2018/07/17 10:30:30 by jmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strdup(char *src)
{
	char *dest;

	dest = NULL;
	dest = (char*)malloc(ft_strlen(src) + 1);
	if (dest == NULL)
	{
		return (NULL);
	}
	ft_strcpy(dest, src);
	return (dest);
}

int		main(void)
{
	char src[] = "EarthSalamander #42";

	printf("Result: %s", ft_strdup(src));
	return (0);
}