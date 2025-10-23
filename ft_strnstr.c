/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <mguilber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:38:55 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/22 20:56:59 by mguilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*little) // Si little est vide, on retourne big
		return ((char *)big);
	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		while (i + j < len && big[i + j] && little[j] && big[i
			+ j] == little[j])
		{
			j++;
		}
		if (little[j] == '\0') // fin de little atteinte => match trouvé
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

/*
int	main(void){
	printf("%s", ft_strnstr("lorem ipsum dolor", "llorem ispum", 15));
}*/
