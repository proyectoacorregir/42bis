/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgotthei <sgotthei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:42:33 by sgotthei          #+#    #+#             */
/*   Updated: 2023/04/26 16:03:19 by sgotthei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int	destlen;
	int	srclen;
	int	i;
	int	j;
	int	n;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = destlen;
	j = 0;
	n = size;
	while (src[j] != 0)
	{
		if ((n - (destlen + 1)) > 0 || n < 0)
		{
			dest[i] = src[j];
			i++;
			n--;
		}
		j++;
	}
	dest[i] = '\0';
	if (n == 0)
		return (destlen);
	if (n >= 1 && n < destlen)
		return (destlen + n);
	if (n < 0 || !(n >= 0 && n < destlen))
		return (destlen + srclen);
	return (0);
}
