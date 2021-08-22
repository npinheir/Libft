/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npinheir <npinheir@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:36:54 by npinheir          #+#    #+#             */
/*   Updated: 2021/08/22 16:22:40 by npinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	This function writes len bytes of value c
	(converted to an unsigned char) to the 
	string b.	*/

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	/* Do not forget to cast it to unsigned char
		as mantionned in the manual */
		((unsigned char *)b)[i++] = (unsigned char)c;
	return (b);
}
