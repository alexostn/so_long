/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oostapen <oostapen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:37:50 by oostapen          #+#    #+#             */
/*   Updated: 2024/11/15 13:37:51 by oostapen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	void	*temp_s;

	temp_s = s;
	while (n--)
	{
		*((unsigned char *)temp_s++) = (unsigned char)c;
	}
	return (s);
}
