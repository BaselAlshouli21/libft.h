/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balshoul <balshoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:25:41 by balshoul          #+#    #+#             */
/*   Updated: 2026/09/26 11:53:13 by balshoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	size_t	size;
	char	src[] = "A_C_C";
	char	dest[6];
	
	size_t	ft_size;
	char	ft_str[] = "A_C_C";
	char	ft_str2[6];
	size = strlcat(dest, src, ft_strlen(dest) + 1);
	printf("----original strlcat:----\nsize: %zu\nnew string: %s\n", size, dest);
	
	ft_size = ft_strlcat(ft_str2, ft_str, ft_strlen(ft_str2) + 1);
	printf("----ft_strlcat----:\nsize: %zu\nnew string: %s\n", ft_size, dest);
}
