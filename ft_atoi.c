/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgotthei <sgotthei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:17:02 by sgotthei          #+#    #+#             */
/*   Updated: 2023/04/26 15:58:23 by sgotthei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	k;
	int	result;

	k = 1;
	result = 0;
	while (*nptr)
	{
		if ((*nptr >= 9 && *nptr <= 13) || *nptr == 43 || *nptr == 32)
			nptr++;
		else if (*nptr == 45)
		{
			k *= -1;
			nptr++;
		}
		else if (*nptr >= 48 && *nptr <= 57)
		{
			result *= 10;
			result += *nptr - 48;
			nptr++;
		}
		else if (!(*nptr >= 48 && *nptr <= 57))
			break ;
	}
	return (result * k);
}
