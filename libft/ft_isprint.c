/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npinheir <npinheir@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:06:19 by npinheir          #+#    #+#             */
/*   Updated: 2021/08/20 12:18:42 by npinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	This function returns 1 if the integer input
	corresponds to a printable character.
	Returns 0 otherwise.	*/

int	ft_isprint(int c)
{
	// Basic protection
	if (!c)
		return (0);
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
