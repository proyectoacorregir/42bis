/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgotthei <sgotthei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:37:31 by sgotthei          #+#    #+#             */
/*   Updated: 2023/04/26 18:36:28 by sgotthei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, int n)
{
	unsigned char	*s1;
	unsigned char	p;
	int				i;

	s1 = (unsigned char *) s;
	p = c;
	i = 0;
	while (i < n)
	{
		if (s1[i] == (unsigned char) p)
			return ((char *) s + i);
		i++;
	}
	return (0);
}
