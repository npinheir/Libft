/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npinheir <npinheir@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:17:38 by npinheir          #+#    #+#             */
/*   Updated: 2021/08/28 18:24:51 by npinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	This function iterates the list ’lst’
	and applies the function ’f’ to the
	content of each element.	*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	// Basic protection
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
