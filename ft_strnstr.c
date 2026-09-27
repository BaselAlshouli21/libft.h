/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balshoul <balshoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 15:42:20 by balshoul          #+#    #+#             */
/*   Updated: 2026/09/26 19:16:08 by balshoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*l;
	char	*b;

	l = (char *)little;
	b = (char *)big;
	i = 0;
	while (b[i])
	{
		j = 0;
		while ((b[i] == l[j]) && (i < len) && l[j])
		{
			i++;
			j++;
		}
		if (!l[j])
			return (&b[i - j]);
		i = i - j + 1;
	}
	return (0);
}
