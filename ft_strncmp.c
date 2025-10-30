/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <mguilber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:22:36 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/30 18:06:29 by mguilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				x;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	x = 0;
	while ((str1[i] && str2[i] && (str1[i] == str2[i])) && i < n)
	{
		i++;
	}
	if (i == n)
		return (0);
	x = str1[i] - str2[i];
	return (x);
}
