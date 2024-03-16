/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aileong <aileong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 01:38:59 by aileong           #+#    #+#             */
/*   Updated: 2024/03/12 01:39:01 by aileong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*lst_ptr;

	lst_ptr = lst;
	if (!lst)
		return ;
	while (lst_ptr)
	{
		f(lst_ptr->content);
		lst_ptr = lst_ptr->next;
	}
}
