/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <mguilber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 14:36:35 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/22 18:45:23 by mguilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*result;

	if (nmemb == 0 || size == 0)
	{
		result = malloc(1);
		if (!result)
			return (NULL);
		return ((void *)result);
	}
	if (size != 0 && nmemb != 0 && (nmemb * size) / size != nmemb)
		return (NULL);
	result = malloc(nmemb * size);
	if (!result)
		return (NULL);
	ft_bzero(result, nmemb * size);
	return (result);
}

/*
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if(nmemb == 0 || size == 0){
		nmemb = 1;
		size = 1;
		malloc(1);
	}
	p = malloc(nmemb * size);
	if (!p)
	{
		return (NULL);
	}
	if (nmemb != 0 && size <= INT_MAX / nmemb)
	{
		ft_bzero(p, nmemb*size);
		return(p);
	}
	else
	{
		return (NULL);
	}
}
	*/
/*
int	main(void)
{
	int		size;
	void	*d1;
	void	*d2;

	size = 8539;
	d1 = ft_calloc(size, sizeof(int));
	d2 = calloc(size, sizeof(int));
		if (memcmp(d1, d2, size * sizeof(int)))
			printf("%i\n", memcmp(d1, d2, size * sizeof(int)));
		free(d1);
		free(d2);
		printf("TEST_SUCCESS");
}

*/
