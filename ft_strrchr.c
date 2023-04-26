/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgotthei <sgotthei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:56:14 by sgotthei          #+#    #+#             */
/*   Updated: 2023/04/26 15:54:23 by sgotthei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				len;
	unsigned char	p;

	p = c;
	len = ft_strlen((char *) s);
	while (len > 0)
	{
		if (p == '\0')
			return ((char *) &s[len]);
		else if (s[len] == p)
			return ((char *) &s[len]);
		len--;
	}
	return (0);
}
