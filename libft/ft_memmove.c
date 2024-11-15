/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oostapen <oostapen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:38:07 by oostapen          #+#    #+#             */
/*   Updated: 2024/11/15 13:38:13 by oostapen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest_temp;
	const char	*src_temp;

	dest_temp = dest;
	src_temp = src;
	if (!dest && !src)
		return (NULL);
	if (dest == src)
		return (dest);
	if (dest < src)
	{
		while (n--)
			*dest_temp++ = *src_temp++;
	}
	else
	{
		dest_temp = dest_temp + (n - 1);
		src_temp += (n - 1);
		while (n--)
			*dest_temp-- = *src_temp--;
	}
	return (dest);
}
