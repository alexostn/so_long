/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oostapen <oostapen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:36:17 by oostapen          #+#    #+#             */
/*   Updated: 2024/11/15 13:36:18 by oostapen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	int	i;

	i = 0;
	if (size == 0)
	{
		while (*(src + i))
			i++;
		return (i);
	}
	while (*(src + i) && --size)
	{
		*dest++ = *(src + i++);
	}
	*dest = '\0';
	while (*(src + i))
	{
		++i;
	}
	return (i);
}
