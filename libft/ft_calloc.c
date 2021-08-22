/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npinheir <npinheir@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 14:30:35 by npinheir          #+#    #+#             */
/*   Updated: 2021/08/22 15:56:34 by npinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	This function allocate memory. The allocated
	memory is aligned such that it can be used for
	any data type	*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;
	res = malloc(count * size);
	// Malloc protection
	if (!res)
		return (NULL);
	ft_bzero(res, count * size);
	return (res);
}
