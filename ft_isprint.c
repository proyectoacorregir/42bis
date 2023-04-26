/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgotthei <sgotthei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:03:01 by sgotthei          #+#    #+#             */
/*   Updated: 2023/04/26 15:41:18 by sgotthei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (2);
	else if (c >= 48 && c <= 57)
		return (4);
	else if ((c >= 33 && c <= 47) || (c >= 58 && c <= 64))
		return (16);
	else if ((c >= 91 && c <= 96) || (c >= 124 && c <= 126))
		return (16);
	else if (c == 32)
		return (64);
	else
		return (0);
}
