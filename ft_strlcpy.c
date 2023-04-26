/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgotthei <sgotthei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:53:29 by sgotthei          #+#    #+#             */
/*   Updated: 2023/04/26 15:53:36 by sgotthei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, const char *src, int size)
{
	int	i;
	int	srclen;

	i = 0;
	srclen = ft_strlen(src);
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest += '\0';
	return (srclen);
}
