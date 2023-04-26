/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgotthei <sgotthei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:39:17 by sgotthei          #+#    #+#             */
/*   Updated: 2023/04/26 15:41:35 by sgotthei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, int n)
{
	unsigned char	*s;
	unsigned char	*z;

	s = (unsigned char *) s1;
	z = (unsigned char *) s2;
	while (n > 0)
	{
		if (*s > *z)
			return (1);
		else if (*s < *z)
			return (-1);
		s++;
		z++;
		n--;
	}
	return (0);
}
