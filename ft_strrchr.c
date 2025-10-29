/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:09:15 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/16 15:09:16 by mguilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	cc;
	char	*last;

	i = 0;
	cc = (char)c;
	last = NULL;
	while (s[i])
	{
		if (s[i] == cc)
			last = (char *)&s[i];
		i++;
	}
	if (cc == '\0')
		return ((char *)&s[i]);
	return (last);
}
