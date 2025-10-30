/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <mguilber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:13:05 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/30 18:05:59 by mguilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	*ft_memset(void *str, int c, size_t n)
{
	int				i;
	int				j;
	char unsigned	*st;

	j = n;
	i = 0;
	st = (unsigned char *)str;
	while (i < j)
	{
		st[i] = c;
		i++;
	}
	return (st);
}
