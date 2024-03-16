/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 22:35:32 by aileong           #+#    #+#             */
/*   Updated: 2024/02/28 22:35:33 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (size == 0 && !dst)
		return (0);
	if (ft_strlen(dst) >= size)
		return (size + ft_strlen(src));
	i = ft_strlen(dst);
	j = 0;
	while ((i + j + 1) < size && src[j])
	{
		dst[i + j] = src[j];
		j ++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
