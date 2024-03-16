/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 22:35:19 by aileong           #+#    #+#             */
/*   Updated: 2024/02/28 22:35:20 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// type casted becuase return type char* not const char*
char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (i < (int)ft_strlen(s) + 1)
	{
		if (*(s + i) == (char)c)
			return ((char *)s + i);
		i ++;
	}
	return (NULL);
}
