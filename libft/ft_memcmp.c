/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oostapen <oostapen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:38:00 by oostapen          #+#    #+#             */
/*   Updated: 2024/11/15 13:38:01 by oostapen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*exts1;
	const unsigned char	*exts2;

	exts1 = (const unsigned char *)s1;
	exts2 = (const unsigned char *)s2;
	while (n != 0)
	{
		if (*exts1 != *exts2)
		{
			return (*exts1 - *exts2);
		}
		exts1++;
		exts2++;
		n--;
	}
	return (0);
}
