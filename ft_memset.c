/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgotthei <sgotthei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:15:24 by sgotthei          #+#    #+#             */
/*   Updated: 2023/04/26 15:41:51 by sgotthei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, int n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		*p = (unsigned char) c;
		p++;
		n--;
	}
	return (s);
}
