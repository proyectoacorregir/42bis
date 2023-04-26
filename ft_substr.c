/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgotthei <sgotthei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:51:04 by sgotthei          #+#    #+#             */
/*   Updated: 2023/04/26 16:04:50 by sgotthei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	int		i;

	i = 0;
	if (!s || start < 0 || len < start)
		return (NULL);
	subs = (char *) malloc((len - start) * sizeof(char));
	if (!subs)
		return (NULL);
	while (start + i < len)
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}
