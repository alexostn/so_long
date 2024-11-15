/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oostapen <oostapen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:35:49 by oostapen          #+#    #+#             */
/*   Updated: 2024/11/15 13:35:50 by oostapen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_occurrence;

	last_occurrence = s;
	while (*s++ != '\0')
	{
		if (*s == (char)c)
			last_occurrence = s;
	}
	if (*last_occurrence != (char)c && (char)c != '\0')
		return (NULL);
	return ((char *)last_occurrence);
}
