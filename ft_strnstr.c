/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoviell <enoviell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:52:27 by enoviell          #+#    #+#             */
/*   Updated: 2023/01/19 13:14:08 by enoviell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *little, const char *big, size_t n)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	if (!little)
		return ((char *)big);
	while (x < n)
	{
		if (big[x] != little[y])
		x++;
		while ((big[x + y] == little[y]) && n > (x + y))
		{
			y++;
			if (little[y] == '\0')
				return ((char *)big + i);
			if (big[i + y] != little[y])
			{
				i++;
				y = 0;
			}
		}	
	}
	return (NULL);
}