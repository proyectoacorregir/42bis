/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgotthei <sgotthei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:57:47 by sgotthei          #+#    #+#             */
/*   Updated: 2023/04/26 15:54:08 by sgotthei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, int len)
{
	if (*little == 0)
		return ((char *)big);
	while (*big && len > 0)
	{
		if (*big == *little)
			return ((char *) big);
		len--;
		big++;
	}
	return (0);
}
