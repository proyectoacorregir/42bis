/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgotthei <sgotthei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:28:11 by sgotthei          #+#    #+#             */
/*   Updated: 2023/04/26 15:38:55 by sgotthei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(int nelem, int elsize)
{
	void	*cal;
	int		len;

	len = nelem * elsize;
	cal = (void *) malloc(len);
	if (len != 0)
	{
		ft_memset(cal, 0, len);
	}
	return (cal);
}
