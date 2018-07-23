/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaguire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 14:53:35 by jmaguire          #+#    #+#             */
/*   Updated: 2018/07/23 14:52:33 by jmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*out;
	int		total_bytes;

	i = 1;
	total_bytes = 0;
	while (i < argc)
	{
		total_bytes += ft_strlen(argv[i]);
		if (i < argc - 1)
			total_bytes++;
		i++;
	}
	out = malloc(total_bytes + 1);
	if (out == NULL)
		return (0);
	out[0] = '\0';
	i = 1;
	while (i < argc)
	{
		ft_strcat(out, argv[i]);
		ft_strcat(out, "\n");
		i++;
	}
	write(1, out, total_bytes);
}
