/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:22:36 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/16 15:22:38 by mguilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				x;

	i = 0;
	x = 0;
	while ((s1[i] && s2[i] && (s1[i] == s2[i])) && i < n)
	{
		i++;
	}
	if (i == n)
		return (0);
	x = s1[i] - s2[i];
	return (x);
}
