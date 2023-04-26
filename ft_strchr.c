/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgotthei <sgotthei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:54:46 by sgotthei          #+#    #+#             */
/*   Updated: 2023/04/26 15:41:57 by sgotthei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	p;

	p = c;
	while (*s)
	{
		if (*s == p)
			return ((char *) s);
		s++;
	}
	if (p == '\0')
		return ((char *) s++);
	else
		return (0);
}
