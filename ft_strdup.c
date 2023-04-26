/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgotthei <sgotthei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:41:02 by sgotthei          #+#    #+#             */
/*   Updated: 2023/04/26 15:42:52 by sgotthei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*dup;

	i = ft_strlen(s) + 1;
	dup = (char *) malloc(sizeof(char) * i);
	if (!dup)
		return (NULL);
	while (s[j] != 0)
	{
		dup[j] = s[j];
		j++;
	}
	return (dup);
}
