/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 22:33:54 by aileong           #+#    #+#             */
/*   Updated: 2024/02/28 22:33:57 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// nmemb: number of elements.
// how does that make sense?? idk.
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	tsize;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	if (nmemb > 2147483647 / size)
		return (NULL);
	tsize = nmemb * size;
	ptr = malloc(tsize);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, tsize);
	return (ptr);
}
