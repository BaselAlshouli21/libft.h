/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balshoul <balshoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 18:46:57 by balshoul          #+#    #+#             */
/*   Updated: 2026/09/26 11:46:19 by balshoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	i;
	char	*s;

	j = ft_strlen((const char *)dst);
	s = (char *)src;
	i = 0;
	if (!dst || !s)
		return (ft_strlen(dst) + ft_strlen(src));
	if (!size)
		return (ft_strlen(src));
	while (s[i] && i < size - 1)
	{
		dst[j] = s[i];
        j++;
        i++;
	}
    dst[j] = 0;
    return (j);
}
